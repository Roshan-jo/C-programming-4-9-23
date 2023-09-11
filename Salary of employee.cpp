/*This program is to find salary of employee*/
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", a);
	b=(a*16)/100;
	printf("The HRA of employee is %d", b);
	c=(a*44)/100;
	printf("The DA of employee is %d", c);
	d=b+c;
	printf("Total salary of employee is %d", d);
	return 0;
}
