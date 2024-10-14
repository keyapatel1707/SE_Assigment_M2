#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("%c is uppercase letter.\n,ch");
		
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("%c is lowercase letter.\n,ch");
		
	}
	else{
		printf("%c is sprcial character.\n",ch);
	}
	}
