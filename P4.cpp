#include<stdio.h>

int main()
{
	int a[7];
	
	printf("Enter numbers in your array : ");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<7/2;i++)
	{
		a[i] = a[i] + a[6-i];
		a[6-i] = a[i] - a[6-i];
		a[i] = a[i] - a[6-i];
	}
	
	
	printf("\n\nReverse Array : \n\n");
	for(int i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
