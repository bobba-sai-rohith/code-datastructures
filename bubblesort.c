#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int* a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i;int n;int a[20];
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	bubble_sort(a,n);
	printf("after sorting");
		for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
