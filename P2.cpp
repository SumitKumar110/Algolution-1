#include<stdio.h>

int main()
{
	int a[5],max;
	
	printf("Enter numbers in your array : \n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	max = a[0];
	for(int i=1;i<5;i++)
	{
		if(max<a[i])
		max = a[i];	
	}
	
	printf("The maximum of the array is : %d ",max);
}
