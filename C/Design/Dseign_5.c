/*
    1 
    2 2 
    3 3 3 
    4 4 4 4    */
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
			printf(" %d ",i);
		}
	    printf("\n");
	}
	return 0;
}
