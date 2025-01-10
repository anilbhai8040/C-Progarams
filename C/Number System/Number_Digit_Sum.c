//  I/P = 1584  O/P = 18
#include<stdio.h>
int main()
{
	int no,r,sum=0;
	printf("enter any positive number :-");
	scanf("%d",&no);
	
	while(no>0)
	{
		r=no%10;
		sum=sum+r;
		no=no/10;
	}
	printf("sum of digit=%d",sum);
	return 0;
}
