#include <stdio.h>

int main(void)
{
	unsigned int num;
	int	cnt = 0;
	printf("십진수: ");
	scanf("%u", &num);

	unsigned int mask = 1<<7; 
	printf("이진수: ");

	((num & mask)==0)?printf("0") : printf("1") && cnt++;
	mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;
	((num & mask)==0)?printf("0") : printf("1") && cnt++;
    mask = mask >>1;

	printf("\n1의 개수: %d\n",cnt);
}
