#include <stdio.h>

int main()
{
	int light_speed = 300000;
	int distance = 149600000;
	int time,  minute, second;

	time = distance / light_speed;
	minute = time/60;
	second = time % 60;

	printf("빛의 속도는 %dkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %dkm \n", distance);
	printf("도달 시간은 %d초 \n",time);
	printf("도달 시간은 %d분 %d초 \n", minute, second);
}

