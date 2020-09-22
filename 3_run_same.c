#include<stdio.h>
#define PI 3.14

int main()
{
	int P,H;
	float R,T;

	printf("Type the speed\n");
	printf("Panda :");
	scanf("%d",&P);
	
	printf("Hoarse :");
	scanf("%d",&H);

	R = 10*PI;
	
	T= R/(P+H);

	printf("t = %f",T); 
	
} 
