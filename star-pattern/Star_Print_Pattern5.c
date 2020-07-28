/*
*000*000*
0*00*00*0
00*0*0*00
000***000
*/
#include<stdio.h>
void main()
{ 
    int i,j,n;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j||j==5)
			{
				printf("* ");
			}
			else
			{
				printf("0 ");
			}
		}
		for(j=4;j>=1;j--)
		{
			if(i==j)
			{
				printf("* ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}