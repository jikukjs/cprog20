#include <stdio.h>
#define R 3
#define N 2
#define C 4

int main()
{
	int a[R][N] = {{0,1},{1,1},{1,0}};
	int b[N][C] = {{1,1,0,1},{0,1,0,0}};
	int r[R][C] = {0};

	int i,j,k;
	for (i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{	
			for(k=0; k<N; k++)
			{
				r[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{	
			printf("%d", r[i][j]);
		}
		printf("\n");
	}
}
