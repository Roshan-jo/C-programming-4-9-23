/*This progam is to find percentage of 5 subjects*/
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	f=(a+b+c+d+e)/5;
	printf("The percentage of the student is %d %%", f);
	return 0;
}
