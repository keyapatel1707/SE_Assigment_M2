#include<stdio.h>
int main()
{
	float salary,premium;
	const float premiumrate=0.05;
	
	printf("enter the salary:");
	scanf("%f",&salary);
	premium=salary*premiumrate;
	printf("your insurance is: %2f\n",premium);
}
