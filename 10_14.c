#include <stdio.h>

int main(void) 
{
	int a[3][5] = { { 87, 98, 80, 76, 3 },
					{ 99, 89, 90, 90, 0 },
					{ 65, 68, 50, 49, 0 }
										};
	int i;
	for (i = 0; i < 3; i++) 
	{
		double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
		printf("학생 #%i의 최종성적 = %10.2f \n", i + 1, final_scores);
	}

}
