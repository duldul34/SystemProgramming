#include <stdio.h>
#include <signal.h>
int alarmFlag = 1;

void myHandler()
{
	printf("My handler function is called \n");
	alarmFlag = 0;
}
void main()
{
	void (*old_handler)();
	old_handler = signal(SIGALRM, myHandler);
	alarm(3);
	printf("Loop start... \n");
	while(alarmFlag)
		sleep(1);
	printf("Loop ends due to my handler function. \n");
	signal(SIGALRM, old_handler);
	alarmFlag = 1;
	alarm(3);
	while(alarmFlag)
		sleep(1);
}

