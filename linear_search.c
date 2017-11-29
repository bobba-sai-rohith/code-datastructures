#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20];
	int n,x,i;int flag=0;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&a[i]);}
	printf("enter element to search");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("element %d is found at %dth position",x,i+1);
			flag=1;
		}
		
	}
	if(flag==0)
	{
	
	printf("element not found");
          }
	return 0;
}
