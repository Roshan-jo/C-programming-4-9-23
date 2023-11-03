//this program is to print all odd numbers from 1 to n//
#include<stdio.h>
int main()
{
	int i, n;
	printf("enter a number here: ");
	scanf("%d", &n);
	for(i=0;i<n; i++)
	{
		if(i%2!=0)
		printf(" %d", i);
	}

}
