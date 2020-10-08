#include <stdio.h>
#include <math.h>

double get_height(double x, double y)
{
	double radians = y *(3.141592 /180.0);
	
	double b = sin(radians) * x;

	return b;  
}

int main()
{
	double a, degree;
	
	printf("빗변 a입력: ");
	scanf("%lf", &a);
	printf("각도 입력 : ");
	scanf("%lf", &degree);

	printf("%lf",get_height(a, degree));
}
