/*
    I/P = 10
    O/P = 1 4 9 16 25 36 49 64 81 100
*/
#include<stdio.h>
int main()
{
	int i,no;
	printf("no = ");
	scanf("%d",&no);

	printf("\nSquares : ");
	for(i=1; i<=no; i++)
	{
		printf("%d ",i*i);
	}
	return 0;
}
