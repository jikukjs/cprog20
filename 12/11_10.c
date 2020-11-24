#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define SIZE 26

void main()
{
    char str[] = "The worst things to eat before you sleep";
    int cnt[SIZE][2];
	int i;

	for (i = 0; i <SIZE; i++)
	{
		cnt[i][0] = i+65;
		cnt[i][1] = 0;
	}

	


	for (i =0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		++cnt[str[i]-65][1];		
	}
	printf("%s\n", str);	

	for (i =0; i< SIZE; i++)
	{
		printf("%c ", cnt[i][0]);
		printf("%d\n", cnt[i][1]);
		
	}

}

