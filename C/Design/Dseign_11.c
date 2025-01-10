/*
    1
    0 0
    1 1 1
    0 0 0 0      */
#include<stdio.h>
int main()
{
	int i,j,no;
	printf("no = ");
	scanf("%d",&no);


	for(i=1; i<=no; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%2==0)
			{
				printf(" 0 ");
			}
			else
			{
				printf(" 1 ");
			}
		}
		printf("\n");
	}
	return 0;
}
