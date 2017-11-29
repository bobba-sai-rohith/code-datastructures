#include<stdio.h>
#include<stdlib.h>
void towers_of_hanoi(int n,char s_p,char d_p,char a_p)
{
	if(n==1)
	{
		printf("\nmove disk from %c to %c",s_p,d_p);
	}
	else
	{
		towers_of_hanoi(n-1,s_p,a_p,d_p);
		printf("\nmove disk from %c to %c",s_p,d_p);
		towers_of_hanoi(n-1,a_p,d_p,s_p);
	}
}
int main()
{
	char s_p,d_p,a_p;int n;
	printf("enter the number of disks\n");
	scanf("%d",&n);
	s_p='S';a_p='A';d_p='D';
	towers_of_hanoi(n,s_p,d_p,a_p);
	return 0;
}
