/*This program is to convert Km to m, cm and mm*/
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("Meter: %d m \n", b);
	printf("Centimeter: %d cm \n", c);
	printf("Millimeter: %d mm", d);
	return 0;
}
