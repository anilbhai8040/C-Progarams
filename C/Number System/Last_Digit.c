// I/P = 1234  O/P = 4
#include<stdio.h>
int main()
{
	int no,r;
	printf("enter any positive number :-");
	scanf("%d",&no);

	while(no>0)
	{
		r=no%10;
		break;
		no=no/10;
	}

	printf("last digit = %d",r);
	return 0;
}
