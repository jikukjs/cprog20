#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num = rand()%100+1;
	
	int input;
	
	printf("난수 : %d\n",num);
	do 
	{
		printf("수를 입력하세요: ");
		scanf("%d", &input);
		if (input == num)
		{
			printf("맞습니다\n");
		}
		else {
			printf("틀립니다\n");
		}
	
	} while (input != num);  


}
