//  I/P = 10403300  O/P = 4
#include<stdio.h>
int main()
{
	int no,r,k=0;
	printf("enter any positive number :-");
	scanf("%d",&no);

	while(no>0)
	{
		r=no%10;
		if(r==0)
		{
			k++;
		}
		no=no/10;
	}

	printf("total zero digit in number = %d",k);
	return 0;
}
