#include <stdio.h>

int MAX( int list[], int n)
{
	int Max = 0;
	
	for(int i = 0; i < n; i++)
	{
		if (Max <= list[i])
		{	
			Max = list[i];
		}
	}
		 	
	return Max;
}


int MIN( int list[], int n)
{
    int Min = 10;

    for(int i = 0; i < n; i++)
    {
        if (Min >= list[i])
        {
            Min = list[i];
        }
    }
	return Min;
}


int main(void)
{
	int scores[5] = { 1, 2, 3, 4, 5 };
	int max, min ;
	max = MAX(scores, 5);
	min = MIN(scores, 5);
	printf("최대값은  %d입니다.\n 최소값은 %d입니다\n", max, min);
} 
