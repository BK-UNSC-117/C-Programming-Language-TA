#include<stdio.h>
#include<math.h>

void crt_arr(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		a[i]=i+3;
	}
}

int main()
{
	int arr[5];
	int size=5;

	crt_arr(arr,size);

	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");


	return 0;
}
