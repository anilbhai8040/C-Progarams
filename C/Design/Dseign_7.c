/*
    A
	B C
    D E F
	G H I J       */
#include<stdio.h>
int main()
{
	int i,j,no;
	char c=65;
	printf("no = ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %c ",c);
			c++;
		}
	    printf("\n");
	}
	return 0;
}
