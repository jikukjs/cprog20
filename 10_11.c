#include <stdio.h>

int two(int list[],int n, int k)
{
	int low = 0;
	int high = n-1;
	
	while ( low <= high) 
	{
		int middle = (low+high)/2;
		if (k == list[middle])
			return middle;

		else if ( k >= list[middle])
			low = middle +1;
		
		else
			high = middle -1;
	}
}


int main()
{
	int key;
	int grade [16] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
	printf("탐색 값을 입력하시오: ");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", two(grade,16,key));
}	 
