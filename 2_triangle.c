#include <stdio.h>

int main()
{
	double w,h,area,perimeter;

	printf("가로길이:");
	scanf(" %lf",&w);
	printf("세로길이:");
	scanf(" %lf",&h);

	area = w*h;
	perimeter = 2*(w+h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);

}
	
