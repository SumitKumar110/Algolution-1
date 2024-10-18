#include<stdio.h>

int main()
{
	int a[] = {10,20,30,40,50,60,70,80,100};
	int b[] = {7,11,15,21,30,38,47};
	int n, p, q, i = 0, j = 0;
	
	p = (sizeof(a)/sizeof(a[0]));
	q = (sizeof(b)/sizeof(b[0]));
	
	n = p + q; 
	
	int c[n];
	
	for(int k=0;k<n;k++)
	{
		if(i<p && j<q)
		{
			if(a[i]<b[j])
			{
				c[k] = a[i];
				i++;
			}
			
			else if(b[j]<a[i])
			{
				c[k] = b[j];
				j++;
			}
			
			else
			{
				c[k] = a[i];
				i++;
				j++;
				
				n--;
				
			}
		}
		
		else if(i == p)
		{
			while(j!=q)
			{
				c[k] = b[j];
				j++;
				k++;
			}
			
			break;
		}
		
		else
		{
			while(i!=p)
			{
				c[k] = a[i];
				i++;
				k++;
			}
						
			break;
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);		
	}
	
	return 0;	
}
