#include <stdio.h>
#include <stdbool.h>

void main()
{
	int a[5]={10,11,12,13,14};
	int b[5]={14,12,11,10,13};
	int sz=sizeof(a)/sizeof(a[0]);
	int tmp[2*sz];

	for(int i=0;i<sz;i++)
	{
		tmp[i]=a[i];
		tmp[i+sz]=a[i];
	}
	
	int cnt=0;
	int ind[sz];

	for(int i=0;i<2*sz;i++)
	{
		if(tmp[i]==b[cnt])
		{
			ind[cnt]=i;
			cnt++;
		}
	}
	
	for(int i=0;i<cnt;i++)
	{
		printf("%d\n",ind[i]);
	}
	
	if(cnt==sz)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

}
