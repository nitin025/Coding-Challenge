#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,z;
	printf("Enter the value of n:");
	scanf("%d",&n);


	for(i=0;i<n-2;i++)
	{

		for(z=0;z<((n-1)*2)-(n-5);z++)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");

		}
		printf("\n");

	}
	for(i=0;i<n-2;i++)
	{

		for(z=0;z<n*2;z++)
		{
			printf(" ");
		}

		for(j=0;j<n-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-2;i>0;i--)
	{


		for(z=0;z<n*2;z++)
		{
			printf(" ");
		}
		printf(" " );
		for(k=0;k<n-i-2;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");

		}
		printf("\n");


	}
	int m= n*3;
	for(i=0;i<n;i++)
	{

		for(k=0;k<i*3;k++)
		{
			printf(" ");

		}
		for(j=0;j<(n-i)*3;j++)
		{
			printf("* ");

		}
		printf("\n");

	}

    return 0;
}
