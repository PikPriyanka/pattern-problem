#include<stdio.h>
void main()
{
   int i,j,sp,n;
   printf("Enter from 1 to 9 to print star pattern ");
	
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	   for(sp=1;sp<=2*(n-i);sp++)
	   {
		   printf(" ");
	   }
	   
		for(j=1;j<=i;j++)
		{
		printf(" *");
		}
	 printf("\n");
   }
}