#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("enter three number:");
	scanf("%d %d %d",&a,&b,&c);
	min=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("the minimum number is:%d\n",min);
	
}
