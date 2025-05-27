#include<stdio.h>
#include<math.h>

void cnv(int a,int *binary)
{
	*binary=0;
	int res;
	int n;
	int cnt=0;
	res=a%2;
	a/=2;
	*binary+=pow(10,cnt)*res;
	cnt++;
	for(;;)
	{
		if(a==0 || a==1)
		{
			*binary+=pow(10,cnt)*a;
			break;
		}
		else
		{
			res=a%2;
			a/=2;
			*binary+=pow(10,cnt)*res;
			cnt++;
		}
	}
	printf("Printed by the void func %d\n",*binary);
}

int main()
{
	int a=8;
	int bin;
	cnv(a,&bin);
	printf("Printed by the pointer method %d\n",bin);
}

