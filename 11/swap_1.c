#include <stdio.h>

void swap(int* pa, int* pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a =100, b =200;
	printf("a=%d, b=%d\n",a,b);

	swap(&a, &b);

	printf("a=%d, b=%d\n",a,b);
}


