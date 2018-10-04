#include <stdio.h>
#include <stdlib.h>

void realloc_(void* pointer, size_t size)
{
	if(pointer == NULL)
	{
		return malloc(size);
	}
	if(!size)
	{
		free(pointer);
		return NULL;
	}
	free(pointer);
	return malloc(size);
}

int main()
{
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	int *a = (int*)malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nEnter new n:\n");
	scanf("%d", &n);
	realloc_(a, n);  
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
