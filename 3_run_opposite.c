#include <stdio.h>
#define PI 3.14

int main()
{
	int P, H;
	float T,R;

	printf("Type the speed \n");
	printf("Panda :");
	scanf("%d",&P);

	printf("Hoarse :");
	scanf("%d", &H);

	R = 10*PI;

	T = R / (H-P);

	printf("t = %f",T);
}
