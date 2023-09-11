/*This program is to find if three numbers equal or not*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c && c==a)
	printf("The numbers are equal");
	else
	printf("The numbers are not equal");
	return 0;
}
