#include<stdio.h>

int main()
{
	int r,c;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	
	printf("Enter number of columns : ");
	scanf("%d",&c);
	
	
	for(int i=1;i<=r;i++)
	{
		if(i%2 != 0)
		{
			for(int j=1;j<=c;j++)
			{
				printf("%d",j);	
			}
			
			printf("\n");
		}
		
		else
		{
			for(int j=c;j>0;j--)
			{
				printf("%d",j);
			}
			
			printf("\n");
		}
	}
	
	return 0; 
	
}
