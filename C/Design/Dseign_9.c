/*
    A
	A B
	A B C
	A B C D       */
#include<stdio.h>
int main()
{
	int i,j,no;
	char ch=65;
	printf("no = ");
	scanf("%d",&no);


	for(i=1; i<=no; i++)
	{
		ch='A';
		for(j=1; j<=i; j++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
