//  prime number = 2,3,5,7,11,13,.....
#include<stdio.h>
int main()
{
	int no,i,count=0;
	printf("enter any positive number :- ");
	scanf("%d",&no);

	for(i=2; i<no; i++)
	{
		if(no%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("\n %d is prime number..",no);
	}
	else
	{
		printf("\n %d is not prime number..",no);
	}
	return 0;
}
