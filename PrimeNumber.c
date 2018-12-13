#include<stdio.h>
int main()
{
	int tally,number;
	unsigned char flag=0;
	printf("Enter an integer number:");
	scanf("%d",&number);
	for(tally=2;tally<(number/2);tally++)
	{
		if(number%tally==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\n %d is a prime number\n",number);
	else
		printf("\n %d is not a prime number\n",number);
	return 0;
}	
