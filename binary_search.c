#include<stdio.h>
#include<stdlib.h>
void binary_search(int* a,int ub,int lb,int x)
{
	int middle;
	middle=(ub+lb)/2;
	if(x>a[middle])
	{
		binary_search(a,ub,middle+1,x);
		
		
		
	}
	else if(x<a[middle])
	{
		binary_search(a,middle-1,lb,x);
	}
	else
	{
		printf("element is found at %dth position",middle+1);
	}
}
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
	int a[20];
	int i,n,x;
	printf("enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter element to search");
	scanf("%d",&x);
	bubble_sort(a,n);
	binary_search(a,n,0,x);
	return 0;
	
}
