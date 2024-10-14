#include<stdio.h>
main()
{
	int mat[3][3], r, c;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter mat[%d][%d] : ", r,c);
			scanf("%d",&mat[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mat[r][c]);
		}
		printf("\n");
	}
}
