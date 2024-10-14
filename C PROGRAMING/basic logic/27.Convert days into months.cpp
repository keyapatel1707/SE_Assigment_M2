#include<stdio.h>
int main()
{
	int day;
	float month;
	printf("enter number of day:");
	scanf("%d",&day);
	month=day/30;
	printf("equivalent month:%.2f\n",month);
	
}
