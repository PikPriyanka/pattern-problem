#include<stdio.h>
void main()
{

  int i,j,k,n;
  printf("Enter from 1 to 9 to print star pattern");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	  if(i<=n)
	  {
		  for(j=1;j<=i;j++)
		  {
		    printf("* ");
		  }
	  }
	  else
	  {
		  for(k=n+1-i;k>=1;k--)
		  {
			  printf("* ");
		  }
	  }
	  printf("\n");
  }
}