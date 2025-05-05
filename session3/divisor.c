#include<stdio.h>

void arr_sz(int *arr,int *sz)
{
	*sz=sizeof(arr)/sizeof(arr[0]);
}

void n_divisors(int a,int *counter)
{
	int i=1;
	*counter=0;
	while(i<=a)
	{
		if(a%i==0)
		{
			*counter+=1;
			i++;
		}
		else
		{
			i++;
		}
	}
}

void divis(int cnt,int a,int *divisors)
{
	
	int tmp=0;
	int place=0;
	for(int i=0;i<a;i++)
	{
		tmp=i+1;
		if (a%tmp==0)
		{
			divisors[place]=tmp;
			place++;
		}
	}	
}

void GCD(int *divisors0,int *divisors1,int *gcd,int sz0,int sz1)
{
	int tmp;
	for(int i=0;i<sz0;i++)
	{
		for(int j=0;j<sz1;j++)
		{
			if(divisors0[i]==divisors1[j])
			{
				printf("Got a new one\n");
				*gcd=divisors0[i];
			}
		}
	}
	printf("%d\n",*gcd);
}


