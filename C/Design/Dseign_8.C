/*
    A
	B B
	C C C
	D D D D     */
#include<stdio.h>
int main()
{
	int i,j,no;
	char ch='A';
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %c ",ch);	
		}
		ch++;
	    printf("\n");
	}
	return 0;
}
