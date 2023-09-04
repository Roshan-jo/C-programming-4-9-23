/*This program is used to show perform all arithmetic operations*/
#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d", &a, &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("The sum of two numbers is %d \n", c);
	printf("The difference of two numbers is %d \n", d);
	printf("The product of two numbers is %d \n", e);
	printf("The quotient of two numbers is %d", f);
	return 0;
}

