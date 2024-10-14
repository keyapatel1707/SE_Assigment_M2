#include<stdio.h>
int main()
{
	float physics,math,chemistry,total;
	printf("eligibility criteria of admision :");
	printf("enter the mark of physics:");
	scanf("%f",&physics);
	printf("enter the mark of math:");
	scanf("%f",&math);
	printf("enter the mark of chemistry:");
	scanf("%f",&chemistry);
	total=physics+chemistry+math;
	if((math>=65)&&(physics>=55)&&(chemistry>=50))
	{
		if((total>=190)&&((math+physics)>=140))
		{
			printf("candidte are eligibility for admisson ");
	
		}
		else
		{
			printf("candidte is not eligible");
		}
	}
	else
	{
			printf("candidte is not eligible");
	}
}
