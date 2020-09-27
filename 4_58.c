#include <stdio.h>

int main()
{
	int mid,final,work;
	float mi,fi,wo, score;

	printf("중간 기말 과제 점수를 입력하시오.");
	scanf("%d %d %d", &mid, &final, &work);

	mi = (float)mid / 60*30;
	fi = (float)final /70 *30;
	wo = (float)work * 40 /50;
	score = mi +fi +wo;

	printf("변환점수는 %f 입니다.",score);
}


