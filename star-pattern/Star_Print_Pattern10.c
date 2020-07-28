#include<stdio.h>
void main()
/*{
  int i,j,p=1,n,space;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	  for(space=n;space>i;space--)
	  {
		  printf(" ");
	  }
	  for(j=1;j<=(2*i)-1;j++)
	  {
		  
		  if(j<=i){
		  printf("%d",p=j); 
		  
		  }
		  else{
			  
			  printf("%d",--p);
		  }
	  }
	    printf("\n");
  }

}*/
{
	int i,j;
	    for(i=1;i<=5;i++)
    {
      for(j=5;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }

}