#include<stdio.h>
#include<stdlib.h>
void selection_sort(int*a,int n)
{
	int i,min,j;int temp;
	for(i=0;i<=n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			
		
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
	selection_sort(a,n);
	printf("after sorting");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
