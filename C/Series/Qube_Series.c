/*
    I/P = 10
    O/P = 1 8 27 64 125 216 343 512 729 1000
*/
#include<stdio.h>
int main()
{
	int i,no;
	printf("no = ");
	scanf("%d",&no);

	printf("\nQubes : ");
	for(i=1; i<=no; i++)
	{
		printf("%d ",i*i*i);
	}
	return 0;
}
