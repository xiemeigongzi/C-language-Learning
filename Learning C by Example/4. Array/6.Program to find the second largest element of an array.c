//6.Program to find the second largest element of an array
#include <stdio.h>
int main()
{
	int max=0,i,sub_max;
	int a[]={1,2,3,4,5,8,7,6,9};
	int n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		sub_max=max;
		if(max<a[i])
		{
			max=a[i];
		}
	 } 
	printf("%d",sub_max); 
	return 0;
}
