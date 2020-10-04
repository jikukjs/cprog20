#include<stdio.h>


int main()
{
	char fname[100] = "time.log";
	FILE* fp;
	int min, sec;
	int sum_time = 0;
	int cnt = 0;
	int max = 0;

	fp = fopen(fname, "r");
	
	if (fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while(!feof(fp)) {
		int time = 0; 
		fscanf(fp, "(%d:%d)\n", &min, &sec);
		printf("min = %d, sec = %d\n", min, sec);
		time = min * 60 +sec;
		
		if(max < time){
			max = time;
		}
		sum_time = sum_time + time;
		cnt++;
		// get min, max, avg access time 
	}
	int avg_time = sum_time / cnt;
	printf("%d개의 시간의 총합은  %d초\n", cnt,sum_time);
	printf("평균 시간 %d초-> %d분 %d초\n", avg_time, avg_time/60, avg_time%60);
	printf("최장 시간 %d초-> %d분 %d초\n",max, max/60, max%60); 
	return 0;
}
