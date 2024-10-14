
#include<stdio.h>
main()
{
	int arr1[10][10], arr2[10][10], r, c;
	int rs, cs;
	
	printf("\n\n\t Enter row size  for array : ");
	scanf("%d",&rs);
	printf("\n\n\t Enter col size  for array : ");
	scanf("%d",&cs);
	
	printf("\n\n\n\t Matrix-1 ---------------");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf("\n\n\t Enter arr[%d][%d] : ", r, c);
				scanf("%d",&arr1[r][c]);
			}
		
	}
	
	printf("\n\n\n\t Matrix-2 ---------------");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf("\n\n\t Enter arr[%d][%d] : ", r, c);
				scanf("%d",&arr2[r][c]);
			}
		
	}
	
	printf("\n\n\n\t Matrix-1 ---------------\n\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d", arr1[r][c]);
				
			}
			printf("\n");
	}
	
	printf("\n\n\n\t Matrix-2 ---------------\n\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d", arr2[r][c]);
				
			}
			printf("\n");
	}
	
	printf("\n\n\n\t Addition of 2 matrices ---------------\n\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]+arr2[r][c]);
				
			}
			printf("\n");
	}
	printf("\n\n\n\t multiplication of 2 matrices ---------------\n\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]*arr2[r][c]);
				
			}
			printf("\n");
	}
	printf("\n\n\n\t subtraction of 2 matrices ---------------\n\n");
	for(r=0;r<rs;r++)
	{
			for(c=0;c<cs;c++)
			{
				printf(" %d",arr1[r][c]-arr2[r][c]);
				
			}
			printf("\n");
	}
}
