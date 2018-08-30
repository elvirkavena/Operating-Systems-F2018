#include<stdio.h>
#include<string.h>
int function(int *a,int *b)
{
	int p=*a;
	*a=*b;
	*b=p;
}
int main()
{
	int a;
	int b;
	scanf ("%d%d", &a, &b);
	function (&a,&b);
	printf("%d %d\n", a, b);
}

