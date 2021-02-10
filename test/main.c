#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int main()
{
    int n=2,m=3;
    int **matrix = (int **)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        matrix[i] = (int*)malloc(m*sizeof(int));
    }
    int k=1;
    printf("Original Matrix :\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            matrix[i][j] = k++;
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    matrix = transpose(matrix,n,m);
    printf("Transposed Matrix:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d\t",matrix[i][j]);		
		}
		printf("\n");
	}
    return 0;
}
