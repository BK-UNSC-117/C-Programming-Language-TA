#include<stdio.h>
#include<math.h>

void main()
{
	int n=10;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==n-1-i)
			{
				printf("*\t");
			}
			else if(i==j)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
