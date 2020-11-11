#include <stdio.h>

int main(void) 
{
	int a[3][5] = { { 87, 98, 80, 76, 3 },
					{ 99, 89, 90, 90, 0 },
					{ 65, 68, 50, 49, 0 }
										};
	int i;
	for (i = 0; i < 4; i++) 
	{
		double avg_scores = (a[0][i] + a[1][i] + a[2][i])/3 ;
		printf("평균 성적 = %10.2f \n", avg_scores);
	}

}
