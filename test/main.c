#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int main()
{
    int n=2,m=3;
    double **matrix = (double **)malloc(n*sizeof(double*));
    for(int i=0; i<n; i++)
    {
        matrix[i] = (double*)malloc(m*sizeof(double));
    }
    double **ans = (double **)malloc(m*sizeof(double*));
	for(int i=0; i<m; i++)
	{
		ans[i] = (double *)malloc(n*sizeof(double));
	}
    int k=1;
    printf("Original Matrix :\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            matrix[i][j] = k++;
            printf("%lf\t",matrix[i][j]);
        }
        printf("\n");
    }
    trans(ans,matrix,n,m);
    printf("Transposed Matrix:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%lf\t",ans[i][j]);		
		}
		printf("\n");
	}
    return 0;
}
