#include<stdio.h>

int main()
{
	int thrsh=5;
	int a;
	int sum=0;
	int n=0;
	float mean;
	while(a<thrsh)
	{
		scanf("%d",&a);
		sum+=a;
		n++;
	};
	if(n!=0)
	{
		mean=(float)sum/n;
	};
	printf("%f",mean);
}
