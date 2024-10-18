#include<stdio.h>

int main()
{
	int r, j, count = 0;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	
	for(int i=1;i<=r;i++)
	{
		j = i;
		while(count!=r)
		{
			if(j<r)
			{
				printf("%d",j);
				j++;
				count++;
			}
			
			else
			{
				printf("%d",j);
				count++;
			}
		}
		
		printf("\n");
		count = 0;
	}
	
}
