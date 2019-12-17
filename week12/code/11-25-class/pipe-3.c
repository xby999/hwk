#include "my.h"

int main()
{
	int i;
	pid_t pid;
	printf("xxxxxxxxxxxxxxxxx\n");

	for(i=0;i<3;i++)
	{
		pid = fork();
		if (pid == 0)
		{
			break;
		}
	} 

	if(i<3)
	{
		sleep(i);
		printf("I'm %d child, pid = %u\n",i+1,getpid());
	}
	
	else
	{
		sleep(i);
		printf("this is parent\n");
	}
	return 0;
}
