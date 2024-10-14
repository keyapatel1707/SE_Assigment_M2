#include<stdio.h>
int main()
{
	float centigrade;
	printf("enter the temprature in centigrade:");
	scanf("%f",centigrade);
	printf("display\n \n");
	if(centigrade<0)
	{
		printf("frezzing weather:");
		}
		else if((centigrade<=0)&&(centigrade<=10))
		{
		  printf("very cold weather:");
		}
		else if((centigrade>10)&&(centigrade<=20))
		{
			printf("cold weather");
		}
			else if((centigrade>20)&&(centigrade<=30))
		{
			printf("cold weather");
		}
			else if((centigrade>30)&&(centigrade<=40))
		{
			printf("it's hot'");
		}
			else if((centigrade>=40))
		{
			printf("it's very hot'");
		}
}
