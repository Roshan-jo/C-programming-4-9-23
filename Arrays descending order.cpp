//This program is to sort the elements of the array in descending order//
#include <stdio.h>
int main()
{
	int n,i,j,t;
	printf(" The size of array: ");
	scanf("%d", &n);
	int a[n];
	printf(" Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}printf(" The descending array is ");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
}
