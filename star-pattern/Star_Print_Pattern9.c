/* odd star printf
*
* * *
* * * * *
* * * * * * *
*/
#include<stdio.h>
void main()
{
   int i,j,n;
   printf("enter number from 1 to 9\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=(2*i)-1;j++)
	 {
	   printf("* ");
	 }
	 printf("\n");
   }
}