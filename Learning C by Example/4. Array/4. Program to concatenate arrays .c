//4. Program to concatenate arrays 
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
	int even[5]={0,2,4,6,8};
	int odd[5]={1,3,5,7,9};
	int a[10];
	int i,j,k;
	
		for(i=0,j=0;j<5;i++,j++)
		{
			a[i]=even[j];
		}

		for(k=0;k<5;k++,i++)
		{
			a[i]=odd[k];
		}
	
	print(a,10);
	return 0;
}
