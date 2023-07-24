#include<stdio.h>
main()
{
	int row;
	scanf("%d",&row);
	for (int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j<=row+1-i)
			{
			printf("*");
		    }
		    else
		    printf(" ");
		}
		printf("\n");
	}
}