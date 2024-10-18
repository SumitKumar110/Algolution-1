#include<stdio.h>

int main()
{
	int a[]= {10,20,-5,3,-87,14,25,16,-40}, count = 0;
	int n = sizeof(a)/sizeof(a[0]);
	
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		count++;
	}
	
	printf("The array is : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nThe number of negative numbers in the array is %d",count);
	
	return 0;
}
