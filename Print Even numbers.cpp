/*This program is to print even numbers from 1 to N*/
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter value: ");
	scanf ("%d", &n);
	for (i=0;i<=n;i+=2)
	printf("%d ", i);
	return 0;
}
