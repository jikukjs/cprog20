#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 10
int main( void )
{
	int num;
	srand( (unsigned)time( NULL ) );
	
	num =  1+rand()%MAX ;
	

	if (1<= num && num<4){
		printf("1이 나왔습니다.");
	}
	else if (4<= num && num< 7){
		printf("2가 나왔습니다.");
	}
	else if ( num == 7)
		printf("3이 나왔습니다.");
	else if (num == 8)
		printf("4가 나왔습니다.");
	else if (num == 9)
		printf("5가 나왔습니다.");
	else 
		printf("6이 나왔습니다.");
}
