/*This program is for reversing an array*/
#include <stdio.h>
int main()
{
	int n,v,i;
	printf("Enter size of an array");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter value of a[%d]",i);
		scanf("%d",&v);
		a[i]=v;
	}
	printf("%d",a[i]);
	{
	}
	for (i=0;i<(n/2);i++)
	{
		a[i]+=a[n-i-1];
		a[n-i-1]=a[i]-a[n-i-1];
		a[i]-=a[n-i-1];
		printf("%d %d ", a[i], a[i+1]);
	}
	printf("Array after reversing is ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
