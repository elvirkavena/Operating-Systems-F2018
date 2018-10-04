#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n1;
	srand(time(NULL));
	printf("Enter original array size:");
	scanf("%d",&n1);
	int* a1 = (int *)malloc(n1*sizeof(int));
	for(int i = 0; i < n1; i++)
	{
		a1[i] = 100;
		printf("%d ", a1[i]);
	}
	printf("\n");
	int n2;
	printf("\nEnter new array size: ");
	scanf("%d",&n2);
	void *realloc(void *a1, size_t n2);
	if (n2 > n1)
	{
		for (int i = 0; i < n1; i++)
		{
			a1[i] = 0;
		}	
	}	
	for( int i = 0; i < n2; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\n");
	return 0;
}
