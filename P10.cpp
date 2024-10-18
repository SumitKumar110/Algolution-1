#include<stdio.h>

void parallelogram( int a,int b)
{
	int c;
	
	for(int i=0;i<a;i++)
	{
		c = i;
		
		for(int j=0;j<b;j++)
		{
			
			while(c<b)
			{
				printf(" ");
				c++;
			}
			
			printf("*");
		}
		
		printf("\n");
		c = 0;

	}
}

int main()
{
	int a,b;
	
	printf("Enter number of rows : ");
	scanf("%d",&a);
	printf("Enter number of columns : ");	
	scanf("%d",&b);
	
	printf("\n\n");
	parallelogram(a,b);
	
	return 0;
}
