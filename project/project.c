#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
	char word[50];
	char mean[50];
	int check;
}Mydic;

int main()
{
	int input;
	int cnt = 0;
	Mydic mw[100];
    printf("20201793_김준성의 영단어장\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	
	while(1)
	{
		printf("{영어 단어장} \n\n");
        printf("0. 단어 불러오기\n");
        printf("1. 단어 보기\n");
        printf("2. 단어 찾기\n");
        printf("3. 단어 추가하기\n");
        printf("4. 단어 삭제하기\n");
        printf("5. 단어 저장하기\n");
        printf("6. 종료하기\n");
        printf("-> 입력 : ");
        scanf("%d", &input);

		if (input == 0)
		{
			printf("\n[단어 불러오기]\n\n");
		}
		else if (input == 1)
		{
			printf("\n[단어 보기]\n\n");
		}
		else if (input == 2)
		{
			printf("\n[단어 찾기]\n\n");
		}
		else if (input ==3)
		{
			printf("\n[단어 추가하기]\n\n");
            cnt++;
		}
		else if (input ==4)
		{
			printf("\n[단어 삭제하기]\n\n");
		}
		else if (input == 5)
		{
			printf("\n[저장하기]\n\n");
		}
		else if (input == 6)
		{
			printf("\n[종료하기]\n");
            printf("프로그램 종료\n\n\n");
			break;
		}
		else 
		{
			printf("@ 잘못 입력했습니다.\n\n\n");
		}
	}
}


