#include<stdio.h>
void main()
{
	int i,j,count,k;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",count--);
		}
		count=2;
		for(k=5-i;k>=1;k--)
		{
			printf("%d ",count++);
		}
		printf("\n");
		
		
		
		
	}
}
		
