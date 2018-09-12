#include<stdio.h>

int main()
{
	char cmd[10];
	while (1)
	{
		printf("$");
		scanf("%s", cmd);
		system(cmd);
	}
	return 0;
}

