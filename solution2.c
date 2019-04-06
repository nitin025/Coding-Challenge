#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,z;
	printf("Enter the value of n:");
	scanf("%d",&n);


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
	for(i=0;i<n;i++)
	{
		printf(" ");
		for(j=0;j<n;j++)
		{

			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(z=0;z<n-1;z++)
		{
			printf(" ");
		}

		printf("**\n");
	}
}
