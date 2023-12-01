//C program to find the length of given string without using string function//
#include <stdio.h>
int main()
{
	int i,j=0;
	char ch[100];
	printf("Enter the string: ");
	scanf("%s", ch);
	for(i=0;ch[i]!=0;i++)
	j++;
	printf("The length of string is %d", j);
}
