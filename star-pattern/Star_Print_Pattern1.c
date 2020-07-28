#include<stdio.h>
void main()
{
	int i,j,space,n;
	scanf("%d",&n);
	for(i=n;i>0;i--)
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
}