#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signal)
{
	if (signal == SIGINT)
		printf("YOU PRESSED CTR-C\n");
}

int main()
{
	if (signal(SIGINT, handler) == SIG_ERR)
		printf("Can't catch\n");
	while(1)
		sleep(1);
	return 0;
}
