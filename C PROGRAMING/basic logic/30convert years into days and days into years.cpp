#include<stdio.h>
#define day_per_year 365
int main()
{
	int year;
	int day;
	int year_from_day;
	printf("enter year:");
	scanf("%d",&year);
	day=year*day_per_year;
	printf("%d,year is equivalent to %d.\n",year,day);
	printf("enter the day:");
	scanf("%d",&day);
	year_from_day=day/(float)day_per_year;
	printf("%d day is equivalent %.2f year.\n",day,year);
	
}
