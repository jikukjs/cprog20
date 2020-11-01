#include <stdio.h>

int main()
{
	int list[10] = {3,8,1,1,2,5,2,4,3,6};
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 10; j++)
		{ 
			sum = list[i]+list[j];
			if (sum >=10){
				printf("list[%d] = %d, list[%d] = %d\n", i,list[i],j,list[j]);			}
		}
	}

}
