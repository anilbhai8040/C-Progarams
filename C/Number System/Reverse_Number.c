//  I/P = 1234  O/P = 4321
#include<stdio.h>
int main()
{
	int no,r,rev=0;
	printf("enter any positive number :-");
	scanf("%d",&no);

	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	printf("reverse of this number = %d",rev);
	return 0;
}
