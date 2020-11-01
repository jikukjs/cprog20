#include <stdio.h>

void get_sum(int list[])
{
	for (int i = 1; i<10; i++)
	{
		list[i] = i + (i-1);
	}
}


int main()
{

	int arr[10];

	for (int i = 0; i<10; i++)
		arr[i]= i;

	get_sum(arr);

	for(int i = 0; i < 10; i++)
    	printf("%d\n", arr[i]);
}
	
