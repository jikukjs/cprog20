#include <stdio.h>

void min_max(int arr[], int size, int* min, int* max)
{
	*min = arr[0];
	*max = arr[0];

	for(int i =0; i<size; i++)
	{
		if(arr[i] < *min)
			*min = arr[i];

		if(arr[i] > *max)
			*max = arr[i];
	}
}

int main()
{
	int arr[5]= {10,2,6,8,4};
	int min, max;

	min_max(arr,5,&min, &max);

	printf("min = %d max = %d\n", min, max);
}

