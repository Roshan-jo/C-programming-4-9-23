//this program is to find the reverse of a number//
#include<stdio.h>
#include<math.h>
int main()
{
	int n, m, r, i, t;
	printf("enter a value: ");
	scanf("%d", &m);
	r=0;
	i=0;
	n=m;
	while( n!=0)
	{
	n=n/10;
	i++;
	}
	for(i=--i; m>0;i--)
	{
		t=m%10;
		r=r+t*pow(10,i);
		m=m/10;
	}
	printf("The reverse of the number is: %d", r);
	return 0;
}

