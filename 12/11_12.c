#include<stdio.h>
#include<string.h>
#define LINE_SIZE 1000

void main()
{

	char buffer[LINE_SIZE];
	FILE *fp = fopen("london.txt","r");
	if (fp == NULL)
	{
		printf("파일 여는데 실패함\n");
	}

	while (fgets(buffer, LINE_SIZE-1, fp) != NULL) 
	{
		char * wp = strtok(buffer," ,.!?\t\n");

		while (wp != NULL)
		{
			printf("%s\n",wp);
			wp = strtok(NULL,"  ,.!?\t\n");
		}
	}
	fclose(fp);
}
