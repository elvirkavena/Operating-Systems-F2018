#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signal)
{
	if (signal == SIGUSR1)
		printf("received SIGUSR1 \n");
	else if (signal == SIGSTOP)
		printf("received SIGSTOP \n");
	else if (signal == SIGKILL)
		printf("received SIGKILL \n");
}
int main()
{
	if (signal(SIGUSR1, handler) == SIG_ERR)
		printf("Can't catch\n");
	if(signal(SIGSTOP, handler) == SIG_ERR)
		printf("Can't catch\n");
	if (signal(SIGKILL, handler) == SIG_ERR)
		printf("Can't catch\n");
	while(1)
		sleep(4);
	return 0;
}
