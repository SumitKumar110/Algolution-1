#include<stdio.h>

int main()
{
	int a[5], f=0;
	
	printf("Enter numbers in your array : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<5/2;i++)
	{
		if(a[i] != a[4-i])
		{
			f = 1;
			break;
		}
	}
	
	if (f == 1)
	printf("The array is not pallindrome ");
	
	else
	printf("The array is pallindrome ");
	
	
	return 0;
}
