#include<stdio.h>
void main()
{
	int i,j,k,space;
	
	for(i=1;i<=5;i++)
	{
		for(space=5;space>i;space--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(space=4;space>=i;space--)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
}