#include<stdio.h>
void main()
{
  int  i,j,k,n;
  printf("\nenter the no of lines");
  scanf("%d",&n);
  for(i=1;i<=n;i++)//no of lines
  {
    for(j=1;j<=2*(n-i);j++)//logic for space
	{
		printf(" ");
	}
	 for(k=1;k <=(2*i)-1;k++)
	 {
		 printf("* ");
	 }
	printf("\n");
  }
} 