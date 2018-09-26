#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		while(1)
		{
			sleep(1);
			printf("I'm alive \n");
			fflush(stdout);
    		}
  	}
  	else 
	{  
		sleep(10);
		kill(pid, SIGTERM);
		printf("You're dead!!!");
	}
	return 0;
}
