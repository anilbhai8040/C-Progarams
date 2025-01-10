//armstrong number = 1, 153, 370, 371, 407
#include<stdio.h>
int main()
{
	int k,no,r,sum=0;
	printf("enter any positive number :-");
	scanf("%d",&no);

	k=no;

	while(no>0)
	{
		r=no%10;
		sum=sum+r*r*r;
		no=no/10;
	}

	if(sum==k)
	{
		printf("%d is armstrong number",k);
	}
	else
	{
		printf("%d is not armstrong number",k);
	}
	return 0;
}
