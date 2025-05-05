#include <stdio.h>
#include <stdbool.h>

void main()
{
	int a=4;
	int arr[]={2,2,2,4,5,6};

	int sz=sizeof(arr)/sizeof(arr[0]);
	int tmp=sz;
	bool cnd=false;

	for(int i=0;i<tmp;i++)
	{
		if(cnd==true)
		{
			i--;
			cnd=false;
		}
		if(a==arr[i])
		{
			for(int j=i;j<tmp-1;j++)
			{
				arr[j]=arr[j+1];
			}

			cnd=true;
			tmp--;
		}
	}

	for(int i=0;i<sz;i++)
	{
		printf("%d\t",arr[i]);
	}

}
