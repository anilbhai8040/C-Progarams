/*
    1
	1 2 1
	1 2 3 2 1    */
#include<stdio.h>
int main()
{
	int i,j,no;
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		for(j=1; j<i; j++)
		{
			printf("%d ",j);
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
