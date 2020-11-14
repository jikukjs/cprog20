#include<stdio.h>

void arr_sum(int arr[], int size)
{
	int* p= arr;
	int sum =0;	

	for(int i = 0; i<size; i++)
	{
		sum = sum +*(p+i);
	}
	printf("배열의 합: %d\n",sum); 
}


int main()
{
	int arr[5] = {2,4,6,8,10};
	
	arr_sum(arr,5);
}
