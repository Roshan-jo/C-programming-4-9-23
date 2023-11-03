/*This program is to print odd numbers from 1 to N*/
#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter value: ");
	scanf("%d", &n);
	for (i=1;i<=n;i+=2)
	printf("%d ", i);
	return 0;
}
