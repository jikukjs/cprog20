#include <stdio.h>

float sort(float list[])
{
	int least;
	float temp;
	for (int i = 0; i<4; i++)
	{
		least = i;
		for (int j = i+1; j<5; j++)
		{
			if(list[j] < list[least])
			{
				least = j;
			}
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}

}


int main ()
{
	float grade[5];

	for (int i = 0; i<5; i++)
	{
		printf("학생 %d :", i+1);
		scanf("%f", &grade[i]);
	}

	printf("=====================\n");

	sort(grade);




	for (int i = 0; i<5; i++)
	{
		printf("학생 %d : %f\n",i+1, grade[i]);
	}
} 	
