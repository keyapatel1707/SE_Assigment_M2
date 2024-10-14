#include<stdio.h>
 int main()
 {
 
	int number;
	printf("enter number:");
	scanf("%d",&number);
	if(number>0)
	{
	printf("%d is positive number.\n",number);
}
else if(number<0)
{
		printf("%d is negative number.\n",number);
}
 else
 {
 	printf("the number is zero.\n");
 }
}
