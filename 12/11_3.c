#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[6];
	char s2 [6] = "hello";
	
	strcpy( s1 , s2);
	
	printf("%s\n", s2);
}
