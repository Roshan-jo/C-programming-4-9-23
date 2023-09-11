/* This program is to find best option for Raj*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	printf("The highest point is %d", a);
	else if(b>c)
	printf("The highest point is %d", b);
	else
	printf("The highest point is %d", c);
	return 0;
}
