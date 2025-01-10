/*
    1 4 9 16
	1 4 9
	1 4
	1          */
#include<stdio.h>
int main()
{
	int i,j,no;
	printf("no = ");
	scanf("%d",&no);

	for(i=no; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %d ",j*j);
		}
		printf("\n");
	}
	return 0;
}
