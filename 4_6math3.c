#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, dis;
	printf("계수 a를 입력하시오: ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오: ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오: ");
	scanf("%lf", &c);

	if( a == 0 )
		goto azero;
	
	else 
		goto end;
azero:
	if ( b == 0)
		printf("X의 근은 없고 Y의 근은 %f입니다.",c);
	else
		printf("방정식의 근은 %f입니다.", -c/b);
	
end :
	return 0;	
} 
