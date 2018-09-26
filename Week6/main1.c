#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 	char str[] = "You are beautiful!";
	int fd[2];
	pipe(fd);
	write(fd[1], &str, sizeof(str)); 
	read(fd[0], &str, sizeof(str));
	printf("Received: %s\n", str);
	return 0;
}
