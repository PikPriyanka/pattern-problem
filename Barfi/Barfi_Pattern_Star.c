#include<stdio.h>
void main()
{
	int i,j,k,space,n;
	printf("Enter number from 1 to 9  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=n;space>i;space--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(space=n-1;space>=i;space--)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}