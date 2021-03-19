extern "C"
{
    #include "Scierror.h"
    #include "api_scilab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include "localization.h"
    #include "trans.h"

    static const char fname[] = "transpose";
    int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
    {
        int rows = 0;
        int cols = 0;
        int size  = 0;
        double *in1 = NULL;
        double *out1 = NULL;
        double **mat = NULL;
        double **ans = NULL;
        int k=0;

        if(nin != 1)
        {
            Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
            return 1;
        }
        if(nout != 1)
        {
            Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
            return 1;
        }
        if(scilab_isMatrix2d(env, in[0])==0)
        {
            Scierror(999, _("%s: Wrong type for input argument: A matrix expected"), fname);
            return 1;
        }

        size = scilab_getDim2d(env, in[0], &rows, &cols);
        scilab_getDoubleArray(env, in[0], &in1);
        out[0] = scilab_createDoubleMatrix2d(env, cols, rows, 0);
        scilab_getDoubleArray(env, out[0], &out1);

        mat = (double **)malloc(rows*sizeof(double*));
        for(int i=0; i<rows; i++)
        {
            mat[i] = (double *)malloc(cols*sizeof(double));
        }
        ans = (double **)malloc(cols*sizeof(double*));
        for(int i=0; i<cols; i++)
        {
            ans[i] = (double *)malloc(rows*sizeof(double));
        }

        for(int j=0; j<cols; j++)
        {
            for(int i=0; i<rows; i++)
            {
                mat[i][j] = in1[k++];
            }
        }
        trans(ans, mat, rows, cols);
        k=0;
        for(int j=0; j<rows; j++)
        {
            for(int i=0; i<cols; i++)
            {
                out1[k++] = ans[i][j];
            }
        }

        return 0;
    }
}
