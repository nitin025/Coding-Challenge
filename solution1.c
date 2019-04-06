#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,z;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=n-1;i>0;i--)
	{
		for(k=0;k<n-i;k++)
		{

			printf(" ");
		}

		if(i!=0)
		{
			printf("*");
		}
		for(j=1;j<i;j++)
		{
			printf("  ");
		}

			printf(" *");

		printf("\n");
	}

	for(k=0;k<n-i;k++)
		{

			printf(" ");

		}
		printf("*\n");
	printf("\n");
	for(i=0;i<n;i++)
	{

		for(k=0;k<n-i;k++)
		{

			printf(" ");
		}



		for(j=0;j<=i;j++)
		{

			printf("* ");
		}
		printf("\n");

	}
}
