#include<stdio.h>

int main()
{
	int boom[5][5] = {{1,1,1,1,0},{1,0,1,1,1},{1,1,1,0,1},{1,1,1,1,1},{1,1,1,1,1}};

	int cnt =0;
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j <5; j++)
		{
			if (boom[i][j]== 0)
			{
				if (i==0 && j ==4)
				{
					boom[i][j-1] = 2;
					boom[i+1][j] = 2;
					boom[i+1][j-1] = 2;
				}
				
				else
				{
					for (int x= i-1; x<=i+1; x++)
					{
						for(int y= j-1; y<= j+1; y++)
						{
			 				boom[x][y]=2;
						}
					}
				}
			}
		}
	}

	for (int i =0; i<5; i++)
	{	
		for(int j = 0; j<5; j++)
		{	
			if(boom[i][j]==1)
				cnt = cnt+1;
		}
	}

	printf("살아남은 벽돌 수 : %d", cnt);
}
