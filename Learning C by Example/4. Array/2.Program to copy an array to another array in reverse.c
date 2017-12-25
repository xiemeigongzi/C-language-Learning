//2.Program to copy an array to another array in reverse 
#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	int copy[n];
	int i;
	for(i=0;i<n;i++)
	{
		copy[i]=a[n-1-i];
	}
	
	printf(" a  copy\n");
	for(i=0;i<n;i++)
	{
		printf(" %d   %d \n",a[i], copy[i]);
	}
	
	return 0;
}
