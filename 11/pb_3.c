#include<stdio.h>

int main()
{
	int arr[] = {10,20,30,40,50};
	
	printf("arr = %p\n",arr);
	printf("arr+1 = %p\n", arr+1);
	printf("*arr = %d\n", *arr);
	printf("*(arr+1) = %d\n", *(arr+1));
}

