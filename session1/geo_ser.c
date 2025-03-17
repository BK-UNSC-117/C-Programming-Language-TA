#include<stdio.h>

int main()
{
	float a0,q,m;
	int n=10;
	a0=1.5;
	q=2.5;

	float s=0;
	float tmp=1;
	float a;
	for(int i=0;i<n;i++)
	{
		tmp=q*tmp;
		a=a0*tmp;
		s+=a;
		a0=a;
		printf("%f ",tmp);
		printf("%f\n",a);
		
	}

	m=(float)s/n;
	printf("%f\n",m);

}
