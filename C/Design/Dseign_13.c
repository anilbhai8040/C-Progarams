/*
    4 4 4 4
    3 3 3
    2 2
	1        */
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
			printf(" %d ",i);
		}
		printf("\n");
	}
	return 0;
}
