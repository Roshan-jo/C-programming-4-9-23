//this program is to find the sum of first n natural numbers//
#include<stdio.h>
int main()
{
	int i, n, s=0;
	printf("enter a number here: ");
	scanf("%d", &n);
	for(i=1;i<=n;++i)
	{
		s+=i;
	}
	printf("Sum of first %d natural numbers is: %d", n, s);
	return 0;
}
