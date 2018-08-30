#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	char strRev[10000];
	scanf ("%s", str);
	int n=strlen(str);
	for (int i=n-1; i>=0;i--)
	{
		strRev[n-i-1]=str[i];
	}
	printf("%s\n", strRev);
}

