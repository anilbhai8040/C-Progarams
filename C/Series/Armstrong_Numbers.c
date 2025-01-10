/*
    I/P = 1000
    O/P = 1, 153, 370, 371, 407   Total = 5
*/
#include<stdio.h>
int main()
{
	int i,no,k=0,total=0,r=0,sum=0;
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		k=i;
		sum=r=0;
		while(k>0)
		{
			r=k%10;
			sum=sum+r*r*r;
			k=k/10;
		}
		if(i==sum)
		{
			total++;
			printf("\n %d",i);
		}
	}
	printf("\nTotal Armstrong number between 1 to %d = %d",no,total);
	return 0;
}
