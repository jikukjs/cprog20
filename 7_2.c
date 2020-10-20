#include <stdio.h>
#include <sys/time.h>

int main()
{
 	register long sum, i;
	struct timeval startTime, endTime;	
	double diffTime;

	gettimeofday(&startTime,NULL);
	sum = 0;
	for (i=0; i<100000; i++)
		sum+=i;
	gettimeofday(&endTime,NULL);
	
	diffTime = ( endTime.tv_sec - startTime.tv_sec ) + (( endTime.tv_usec - startTime.tv_usec ) / 1000000.0);

	printf("sum =%ld\n",sum);
	printf("%f s\n",diffTime);
}
