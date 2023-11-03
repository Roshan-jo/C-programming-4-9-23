/*This program is to interhange alternate elements in an even sized array*/
#include <stdio.h>
int main()
{
	int n,v,i,d;
	printf("Enter size of array (even)");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter value of a[%d]",i);
		scanf("%d",&v);
		a[i]=v;
	}
	for (i=0;i<n;i+=2)
	{
		d=a[i];
		a[i]=a[i+1];
		a[i+1]=d;
		printf("%d %d ", a[i], a[i+1]);
	}
	printf("Array after swapping is ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
