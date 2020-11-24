#include <stdio.h>

int main ()
{
	char str[] = "hello, i am Kim junsung";
	char cpy[100];
	int i;

	printf("원본 문자열: %s\n", str);
	for (i = 0; str[i]!= '\0'; i++)
	{
		cpy[i]= str[i];
	} 

	cpy[i] = '\0';

	printf("복사 문자열: %s\n", cpy);
}
	
