#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int trans(double **trans, double **mat, int n, int m)
{
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			trans[j][i] = mat[i][j];
		}
	}
    return 0;
}
