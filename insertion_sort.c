#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int* a,int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		int temp2;
		temp2=a[i];
		
		for(temp=i;(a[temp-1]>=temp2)&&(temp>0); )
		{
			a[temp]=a[temp-1];
			temp--;
		}
		a[temp]=temp2;
		
	}
}
int main()
{
	int i,n;int a[20];
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("after sorting");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
