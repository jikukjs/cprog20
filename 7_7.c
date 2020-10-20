#include <stdio.h>

int fibo(int num){

	if(num == 0) return 1;
	else if(num == 1) return 1;
    else return fibo(num-1) + fibo(num-2);

}


int main(void)
{
	
	int num;
    int i;

	printf("\n개월 입력 :" );
    scanf("%d" , &num) ;
	printf("토끼수: %d " , fibo(num));
    printf("\n");

}
