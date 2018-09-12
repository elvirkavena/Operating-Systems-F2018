#include<stdio.h>

int main()
{
	char arr[300];
	while(1)
	{
		printf("$");
		fgets(arr, 300, stdin);
		system(arr);
	}
	return 0;
}

