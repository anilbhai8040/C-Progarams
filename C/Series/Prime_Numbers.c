/*
    I/P = 10
    O/P = 2,3,5,7   Total = 4
*/
#include<stdio.h>
int main()
{
	int i,j,no,total=0,count=0;
	printf("no = ");
	scanf("%d",&no);

	for(i=2; i<=no; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count=1;
				break;
			}
		}
		if(count==0)
		{
			total++;
			printf("\n %d",i);
		}
	}
	printf("\nTotal prime number between 1 to %d = %d",no,total);
	return 0;
}
