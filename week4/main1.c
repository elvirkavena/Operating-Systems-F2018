#include<stdio.h>
int main()
{
	int n = getpid();
	fork();
	if (getpid()-n==0)
	{
		printf("Hello from parent %d\n",getpid()-n); 
	}
	else if (getpid()>n)
	{
		printf("Hello from child %d\n", getpid()-n); 
	}
	else 
	{
		perror("fork() error");
	}
}
