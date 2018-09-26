#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "You are beautiful!";
	int fd[2];
	pipe(fd);
	if (fork() != 0){
		write(fd[1], &str, sizeof(str)); 
		printf("Sent: %s \n", str);
	}
	else {
		read(fd[0], &str, sizeof(str));
		printf("Received: %s\n", str);
	}
	return 0;
}
