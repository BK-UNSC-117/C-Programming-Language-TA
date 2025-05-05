#include <stdio.h>
#include <math.h>
#include<stdbool.h>

void chk(int bin,bool *ch)
{
	int cnt=1;
	int bin_tmp=bin;

	while(pow(10,cnt)<bin)
	{
		cnt++;
	}

	printf("%d\n",cnt);

	int tmp;
	
	for(int i=cnt-1;i>=0;i--)
	{
		tmp=bin_tmp/pow(10,i);
		printf("%d\n",tmp);
		if(tmp!=0 & tmp!=1)
		{
			*ch=false;
			break;
		}

		else
		{
			*ch=true;
		}
		
		if(tmp==0)
		{
			bin_tmp+=pow(10,i);
			bin_tmp-=pow(10,i);
		}
		else
		{
			bin_tmp-=pow(10,i);
		}
	}
	//printf("%d",*ch);
}
