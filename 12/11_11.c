#include <string.h>
#include <stdio.h>
int main( void )
{ 
	char sentence[] = "language";
	char c = 'g';
	char *fp; // found ptr
	int loc;
	char* sp = sentence;
	char* s = sentence;

	while(1) {
		fp = strchr(s, c);
		loc = (int)(fp - sp);
		
		if(fp == NULL)
			break;
		printf("G의 위치 : %d\n", loc);
		s = s + loc+1;
		
	}

}
