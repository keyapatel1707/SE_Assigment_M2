#include<stdio.h>
int main()
{
	float height;
	printf("enter your height centimeter:");
	scanf("%f",&height);
	if(height<150.0)
	{
		printf("you are categorized a short.\n");
	}
	else if (height>=150.0 && height<=170.7)
	{
		printf("you are categorized as average height.\n");
	}
	else
	{
		printf("you are categorized as tall.\n");
	}
}
