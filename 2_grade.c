#include <stdio.h>

int main()
{
	int num;
	double A,B,C;

	printf("총 학생수:");
	scanf("%d", &num);

	A = num*20/100;
	B = num*60/100;
	C = num*20/100;

	printf("A: %lf\nB: %lf\nC: %lf\n",A,B,C);
}

