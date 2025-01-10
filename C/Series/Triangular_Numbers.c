/*
    I/P = 10
    O/P = 1 3 6 10 15 21 28 36 45 55
    T3 = 3(3+1)/2 = 6
*/
#include<stdio.h>
int main()
{
	int i,no,Tn;
	printf("no = ");
	scanf("%d",&no);

	printf("\nTriangular Series : ");
	for(i=1; i<=no; i++)
	{
		Tn=(i*(i+1))/2;   // logic
		printf("%d ",Tn);	
	}
	return 0;
}
