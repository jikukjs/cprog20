#include<stdio.h>
#include<math.h>

void sosu(int x)
{
	int i,j;
	int cnt=0;

	for (i =2 ; i <= x; i++)
	{
		for (j=2; j<i; j++)
		{
			if (i % j ==0)
				break;
		}
		if ( i == j )
			printf("%d",i);
	}		
}

void main()
{
	int num;
	printf("수를 입력하세요 : ");
	scanf("%d", &num);

	sosu(num);
}
			
					
