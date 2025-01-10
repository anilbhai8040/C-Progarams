/*
    * * * *
    * * * *
    * * * *
    * * * *   */
#include<stdio.h>
int main()
{
	int i,j,no;
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		for(j=1; j<=no; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
   return 0;
}
