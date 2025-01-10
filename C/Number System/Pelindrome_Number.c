//  palindrome numbers = 1, 4, 11, 131, 5678765 
#include<stdio.h>
int main()
{
	int no,r,rev=0,k;
	printf("enter any positive number :-");
	scanf("%d",&no);
	k=no;
	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(rev==k)
	{
	   printf("%d is palindrome number",k);
	}
	else
	{
	   printf("%d is palindrome number",k);
	}
	return 0;
}
