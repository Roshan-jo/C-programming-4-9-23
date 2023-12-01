//Program to find kth largest and kth smallest elements in an array//
#include <stdio.h>
int main()
{
	int n,i,j,t,k;
	printf("Enter the value of k: ");
	scanf("%d", &k);
	printf("The size of array is: ");
	scanf("%d", n);
	int a[n];
	printf("Enter the elements of array ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	printf("The kth largest element is %d \n", a[k-1]);
	printf("The kth smallest element is %d", a[n-k]);
}
