#include<stdio.h>
main()
{
	int row;int k=1;
	scanf("%d",&row);
	for (int i=1;i<=row;i++)
	{
		for(int j=1;j<=row;j++)
		{
			if(j>=row+1-i&&j<=row-1+i)
			{
			printf("   %d",k);
		    k++;
		    }
		    else
		   {
			 printf(" ");
		}
		
		}
		printf("\n");
	}
}