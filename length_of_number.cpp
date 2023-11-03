//This program is to find the length of a number//
#include<stdio.h>
int main ()
{
	int n, i=0;
	printf("enter a number here ");
	scanf("%d", &n);
	while( n!=0)
	{
	n=n/10;
	i++;
	}
	printf("length of number is %d", i);
	return 0;
}
