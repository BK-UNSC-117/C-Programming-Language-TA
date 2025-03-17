#include<stdio.h>

int main()
{
	float a0,d,s;
	int n;

	a0=0;
	d=0.01;
	n=100;
	s=0;

	float a;

	for(int i=0;i<n;i++)
	{
		a=a0+d*i;
		s+=a;
		a0=a;

		printf("%f \n",a);
	}

	float m;
	m=(float) s/n;

	printf("%f",m);

}
