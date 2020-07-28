#include<stdio.h>
void main()
{
	int i,j,space,n;
	printf("Enter from 1 to 9 to print star pattern");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}