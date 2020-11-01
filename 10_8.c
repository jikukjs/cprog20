#include <stdio.h>

void get_square(int a[], int size)
{
	for(int i = 0; i < size; i++)
	a[i] = a[i] * a[i];
}

int main()
{
	int list[] = {1,2,3,4,5};
	get_square(list,5);
	for(int i = 0; i <5; i++)
		printf("%d\n", list[i]);

}


