#include<stdio.h>

void P_arr(int arr[], int size)
{
	int* p= arr;
	
	for(int i = 0; i<size; i++)
	{
		printf("arr[%d] = %d\n",i,*(p+i));
	}
}


int main()
{
	int arr[5] = {2,4,6,8,10};
	
	P_arr(arr,5);
}
