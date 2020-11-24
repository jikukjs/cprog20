#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "ring ding";
	char s2[] = "dong dong";

	strcat(s1, s2);
	printf("%s\n", s1); 
}
