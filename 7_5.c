#include <stdio.h>

int gugudan ( int a, int b)
{
	if (a<=9)
	{
		if (b <=9)
		{
			printf("%d x %d = %d\n", a,b,a*b);
			return gugudan(a,b+1);
		}
	}
}

int main()
{	
	gugudan(3,1);
}

