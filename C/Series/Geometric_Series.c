/*
    I/P = 10
    O/P = 1 2 4 8 16 32 64 128 256 512
*/
#include<stdio.h>
int main()
{
	double i,no,Sn=1;
	printf("no = ");
	scanf("%lf",&no);

	printf("\nGeometric Series : ");
	for(i=1; i<=no; i++)
	{
		printf("\n%lf ",Sn);
		Sn+=Sn;
		//Sn=Sn+Sn;
	}
	return 0;
}
