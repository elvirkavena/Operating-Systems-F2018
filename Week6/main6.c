#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	int fd[2];
	int status;
	pid_t child_1, child_2, id;
	pipe(fd);
		child_1 = fork();
		if (child_1 == 0) 
		{
			printf("Hello from first child with id %d\n", getpid());
			sleep(4);
			read(fd[0], id, sizeof(id));
			kill(id, SIGSTOP);
      		}
		if (child_1 > 0) 
		{
			child_2 = fork();
			sleep(2);
			if (child_2 == 0)
    			{
				sleep(4);
				printf("Hello from second child with id %d\n", getpid());
            		}
     			else 
			{
				write(fd[1], id, sizeof(id));
				waitpid(child_2, &status, 0);
				printf("Done! \n");
			}
		}
	return 0;
}
