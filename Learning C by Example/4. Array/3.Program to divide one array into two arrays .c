//3.Program to divide one array into two arrays 
#include <stdio.h>
void print(int a[],int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	int odd[n];
	int even[n];
	int i=0,j=0,k=0;
	while(i<n)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else 
		{
			odd[k]=a[i];
			k++;
		}
		i++;
	}
	
	print(a,n);
	print(even,j);
	print(odd,k);
	
}
