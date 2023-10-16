/*Program to calculate electricity bill*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a>=0 && a<=101)
	printf("%d",a*2);
	else if(a>=101 && a<=250)
	printf("%d", a*3);
	else
	printf("%d", a*5);
	return 0;
}
