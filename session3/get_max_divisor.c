#include "divisor.c"
#include <stdio.h>

void n_divisors(int a,int *counter);
void divis(int cnt,int a,int *divisor);
void GCD(int *divisors0,int *divisors1,int *gcd,int sz0,int sz1);

int main()
{
	int a=12;
	int b=24;
	int cnt0;
	int cnt1;
	n_divisors(a,&cnt0);
	n_divisors(b,&cnt1);
	int Divis0[cnt0];
	int Divis1[cnt1];
	divis(cnt0,a,Divis0);
	divis(cnt1,b,Divis1);
	for(int i=0;i<cnt0;i++)
	{
		printf("%d\n",Divis0[i]);
	}
	int gcd;
	int sz0=sizeof(Divis0)/sizeof(Divis0[0]);
	int sz1=sizeof(Divis1)/sizeof(Divis1[0]);
	GCD(Divis0,Divis1,&gcd,sz0,sz1);
	printf("%d",gcd);
	return 0;
}
