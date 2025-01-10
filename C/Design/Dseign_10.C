/*
    Z
	Z Y 
	Z Y X 
	Z Y X W       */
#include<stdio.h>
int main()
{
	int i,j,no;
	char ch='Z';
	printf("no = ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		ch='Z';
		for(j=1; j<=i; j++)
		{
			printf(" %c ",ch);
			ch--;
		}
	    printf("\n");
	}
	
}
