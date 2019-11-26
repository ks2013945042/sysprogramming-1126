#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void alarmHandler();
/* 알람 시그널을 처리한다. */
int main()
{
	unsigned int alarm(unsigned int sec);
	signal(SIGALRM, alarmHandler);
	alarm(5);
	printf("무한 루프 \n");
	while(1){
		sleep(1);
		printf("1초 경과 \n");
	}
	printf("실해되지 않음 \n");
}

void alarmHandler()
{
	printf("일어나세요\n");
	exit(0);
}

