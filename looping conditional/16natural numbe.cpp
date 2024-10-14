#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int i=1;
	printf("enter number");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("enter number.\n");
	}
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	
	printf("enter natural number %d\n",n,sum);
}
