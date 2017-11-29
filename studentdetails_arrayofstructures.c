#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	char roll[20];
	int m1,m2,m3;
	int total;
}a[10];
int main()
{
	int i;int n;
	printf("enter the number of studente");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name");
		scanf("%s",&a[i].name);
		printf("enter roll number");
		scanf("%s",&a[i].roll);
		printf("enter marks");
		scanf("%d%d%d",&a[i].m1,&a[i].m2,&a[i].m3);
		a[i].total=a[i].m1+a[i].m2+a[i].m3;
		
	}
	printf("\n\n\n\t*****student detils\n\n\n");
		for(i=0;i<n;i++)
	{
		printf(" name:%s",a[i].name);
		
		printf(" roll number:%s",a[i].roll);

		printf(" marks\n\tm1:%d\n\tm2:%d\n\tm3:%d",a[i].m1,a[i].m2,a[i].m3);
		
		printf("total:%d",a[i].total);
        printf("average:%d",a[i].total/3);		
	}
	return 0;
}
