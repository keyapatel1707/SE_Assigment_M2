#include<stdio.h>
int main()
{
	int number,lastdigit,firstdigit;
	printf("enter number:");
	scanf("%d",&number);
	lastdigit=number%10;
	firstdigit=number;
	while(firstdigit>=10)
	{
		firstdigit/=10;
	}
	int sum=firstdigit+lastdigit;
	printf("summation of fdigit and ldigit:%d\n",sum);
}
