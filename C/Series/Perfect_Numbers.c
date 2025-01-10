/*
    I/P = 4
    O/P = 6 28 496 8128
*/
#include<stdio.h>
int main()
{
	int no;
	int p=0,i,j;
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		p=0;
		for(j=1; j<i; j++)
		{
			if(i%j==0)
			{
				p=p+j;
			}
		}
		if(i==p)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
