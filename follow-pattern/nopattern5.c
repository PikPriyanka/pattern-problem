/*
12345
2345
345
45
5
*/

#include<stdio.h>
void main()
{
	int i,j,space,n;
	printf("Enter number between 1 to 9");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}