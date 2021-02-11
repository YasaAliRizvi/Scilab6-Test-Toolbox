#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int transpose(int **trans, int **mat, int n, int m)
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
