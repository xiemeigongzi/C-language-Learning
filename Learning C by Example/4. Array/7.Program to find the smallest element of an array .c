//7.Program to find the smallest element of an array 
#include <stdio.h>
int main()
{
	int min,i;
	int a[]={1,2,3,4,5,8,7,6,9};
	int n=sizeof(a)/sizeof(a[0]);
	
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	 } 
	printf("%d",min); 
	return 0;
}
