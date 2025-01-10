/*
    I/P = 20
    O/P = 1,2,3,4,5,6,7,8,9,11   Total = 10
*/
#include<stdio.h>
int main()
{
	int i,no,k=0,total=0,r=0,rev=0;
	printf("no = ");
	scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		k=i;
		rev=r=0;
		while(k>0)
		{
			r=k%10;
			rev=rev*10+r;
			k=k/10;
		}
		if(i==rev)
		{
			total++;
			printf("\n %d",i);
		}
	}
	printf("\nTotal pelindrome number between 1 to %d = %d",no,total);
	return 0;
}
