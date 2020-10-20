#include <stdio.h>

void cnt_1(unsigned int n)
{
	static int cnt = 0;
	static unsigned int mask = 1<<7;

	((n & mask)==0)?printf("0") : printf("1") & cnt++;
		
	mask = mask >>1;
	if (mask == 0){
		printf("\n");
		printf("1의 개수 : %d\n",cnt);
	}
	
	else 
		cnt_1(n);
}


int main(void)
{
	unsigned int num;
	printf("십진수: ");
	scanf("%u", &num);

	

	cnt_1(num);
	printf("\n");
}
