#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int **transpose(int **mat, int n, int m)
{
    int **mat1 = (int **)malloc(m*sizeof(int*));
	for(int i=0; i<m; i++)
	{
		mat1[i] = (int *)malloc(n*sizeof(int));
	}
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			mat1[j][i] = mat[i][j];
		}
	}
    return mat1;
}
