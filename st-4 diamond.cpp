#include<stdio.h>
main()
{
	int i,j,k=0,row;
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
	   (i<=(row/2)+1)?k++:k--;	
		for(j=1;j<=row;j++)
		{
			if(j<=row+1-k&&j>=k)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}