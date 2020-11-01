#include <stdio.h>

int main()
{

	int src[10000];
	int dest[10000];

	for (int i =0; i <10000; i++)
	{
		src[i] = i;
	}

	for (int i = 0; i <10000; i++)
	{
		dest[i] = 9999 - src[i];
	}
	
	printf("src:");
	for (int i = 0; i <10; i++)
	{
		printf("%d, ", src[i]);
	}

	printf("\ndest:");
	for (int i = 0; i <10; i++)    
	{
		printf("%d, ", dest[i]);
	}
}
	
