//this program is to find sum of two matrices//
#include<stdio.h>
int main()
{
	int m, n, i, j;
	printf("\n enter number of rows: ");
	scanf("%d", &m);
	printf("\n enter number of columns: ");
	scanf("%d", &n);
	
	printf("\n Enter elements of the 1rst matrix: \n");
	int a[m][n]= {};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter elements fo second matrix: \n");

	int b[m][n]= {};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element b%d%d: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}
	int c[i][j]= {};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   c[i][j]= a[i][j] + b[i][j];
		}
	}
	printf("\n Sum of two matrices: \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{ 
		printf("%d  ", c[i][j]);
		if (j==n-1)
		{
			printf("\n\n");
		}
		}
	}
	return 0;
}
