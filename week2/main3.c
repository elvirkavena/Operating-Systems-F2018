#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int w=2*n-1;
	int p1=w/2;
	int p2=p1;
	char arr[w];
	for (int i=0; i<w;i++)
	{
		arr[i]=' ';
	}

	arr[p1]='*';s
	for (int i = 0; i < w; ++i){
	    printf("%c", arr[i]);
	}
	printf("\n");
	for (int j=1; j<n; j++)
	{
		p1--;
		p2++;
		arr[p1]='*';
		arr[p2]='*';
		for (int i = 0; i < w; ++i){
	        printf("%c", arr[i]);
	    }
	    printf("\n");
	}
}
