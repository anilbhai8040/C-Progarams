//  i/p = 17  ; o/p = F
#include<stdio.h>
#include<math.h>
int main()
{
	int decimal=0,octal,reminder,index=0,i,p=0;
	char hexadecimal[100];
	printf("enter any octal number : ");
	scanf("%d",&octal);

	// octal to decimal
	while(octal>0)
	{
		decimal=decimal+(octal%10)* pow(8,p);// pow math function
		p++;
		octal=octal/10;
	}

	//decimal to hexadecimal
	while(decimal>0)
	{
		reminder=decimal%16;
		if(reminder<10)
		{
			hexadecimal[index++]=reminder+'0';// 48 ascii = 0
		}
		else
		{
			hexadecimal[index++]=reminder+'7';// 55 ascii = 7
		}
		decimal=decimal/16;
	}
	printf("hexadecimal : ");

	for(i=index-1; i>=0; i--)
	{
		printf("%c",hexadecimal[i]);
	}
	return 0;
}
