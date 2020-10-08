#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100

void Rand(int x)
{
	srand( (unsigned)time(NULL));
	for (int i = 0; i<x; i++)
		printf("%d ", 1+rand()%MAX);
}

	



int main( void )
{
	int num;
	printf("랜덤수를 몇개 뽑으시겠습니까?: ");
	scanf("%d개", &num);

	Rand(num);
}
