#include<stdio.h>

int main()
{
	int r,c,count = 0;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	
	printf("Enter number of columns : ");
	scanf("%d",&c);
	
	for(int i=1;i<=r;i++)
	{
		if(i == 1 || i == r)
		{
			for(int j=1;j<=c;j++)
			{
				printf("1");
			}
			
			printf("\n");
		}
		
		else
		{
			for(int j=1;j<=c;j++)
			{
				if(j == 1 || j == c)
				printf("1");
				
				else
				printf("0");
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
