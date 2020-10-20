#include <stdio.h>

int factorial(int n)
{
	if( n <= 1 ) return(1);
	else
		return (n * factorial(n-1) );
}


int main ()
{
	int n;
	printf("수를 입력하시요");
	scanf("%d",&n);

	printf("%d 팩토리얼 : %d\n", n,factorial(n));
}


