/*
    I/P = 10
    O/P = 1,2,5,10  total = 4
*/
#include<stdio.h>
int main()
{
	int i,no,total=0;
	printf("no = ");
	scanf("%d",&no);

	printf("\nFactors : ");
	for(i=1; i<=no; i++)
	{
		if(no%i==0)
		{
			total++;
			printf("%d ",i);
		}
	}
	printf("\nTotal Factors = %d",total);
	return 0;
}
