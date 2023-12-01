//Program to reverse a string//
#include <stdio.h>
#include <string.h>
int main()
{
	char string[20],a;
	int i,l;
	printf("Enter string: ");
	scanf("%[^\n]", string);
	l=strlen(string)-1;
	for(i=0;i<strlen(string)/2;i++)
	{
		a=string[i];
		string[i]=string[l];
		string[l]=a;
	}
	printf("Reverse string is: ", string);
}
