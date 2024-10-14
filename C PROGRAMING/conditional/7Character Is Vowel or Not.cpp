#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	if(marks>=40)
	{
		printf("you have pass:\n");
	}
	else
	{
		printf("you have fail:\n");
	}
}
