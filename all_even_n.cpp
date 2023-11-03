//this program is to print all even numbers from 1 to n//
#include<stdio.h>
int main()
{
	int i, n;
	printf("enter a number here: ");
	scanf("%d", &n);
	for(i=1;i<n; i++)
	{
		if(i%2!=1)
		printf(" %d", i);
	}

}
