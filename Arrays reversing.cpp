//C program to reverse an array//
#include <stdio.h>
int main()
{
	int n,i,t,j;
	printf("The size of array is: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	{
		t=a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=t;
	}
	printf("The reversed array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
}
