#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void include(int list[])
{
	int check = 0;

	for (int i = 0; i< SIZE-1; i++){
		for ( int j = i+1; j<SIZE; j++){
			if (list[i] == list[j])
			{
				check = 0;
				break;
			}
			else
			{ 
				check = 1;	
			}
		} 
	}
	if (check == 1){
		printf("중복값이없습니다.");

	}

	else {
		printf("중복값이 있습니다.");
	}



}


int main(void)
{
	int i;
	int scores[SIZE];
	
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
		scores[i] = rand() % 100;
	for(i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	include (scores);
}

