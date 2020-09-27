#include <stdio.h>

int main(void)
{
	int x;
	printf("수 입력=");
	scanf("%d", &x);

	printf("수 판별: %d\n", (x %2==0) ? 1 : 0 );
}
