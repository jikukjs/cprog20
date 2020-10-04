#include<stdio.h>

int main(void)
{
	int x, y;
	for (x= 1; x<=9; x++)
	{	
		if (x%2==0){
		
			for (y=1; y<=9; y++)
				printf("%d X %d = %d / ", x,y,x*y);
		}
	printf("\n");
	}
	return 0;
}
