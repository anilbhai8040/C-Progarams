/*
    I/P = 7
    O/P = 0,1,1,2,3,5,8,13
*/
#include<stdio.h>
int main()
{
	int i,a=1,b=0,c=0,no;
	printf("no = ");
	scanf("%d",&no);
	
	printf("\nFibonacci series : ");
	for(i=0; i<=no; i++)
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
