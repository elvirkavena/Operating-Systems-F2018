#include <stdio.h>
int main()
{
	int arr[] = {2,0,5,8,4,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort (arr,n);
	for (int i=0;i<n;i++)
	{
		printf ("%d " , arr[i]);
	}
	printf("\n");
}
void bubbleSort(int arr[], int n ) {
	for (int i=0; i<n-1; i++)
	{
		for (int j = 0; j<n-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int p=arr[j];
				arr[j]= arr[j+1];
				arr[j+1]=p;
			}
		}
	}
}
