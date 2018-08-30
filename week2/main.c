#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
	int i;
	float f;
	double d;
	i=INT_MAX;
	f=INT_MAX;
	d=INT_MAX;

	printf("%ld", sizeof(i));
	printf("%s", " ");
	printf("%ld", sizeof(f));
	printf("%s", " ");
	printf("%ld", sizeof(d));
	printf("%s", " ");
	printf("%d",i);
	printf("%s", " ");
	printf("%f", f);
	printf("%s", " ");
	printf("%f", d);
}

