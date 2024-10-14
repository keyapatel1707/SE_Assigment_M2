#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:\n");
		scanf("%c",&ch);
	  switch(ch)
	  {
	  	case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf(" %c vowel ",ch);
			break;
			printf("%c constant",ch);
		}
	
}
