// 3. Program to calculate sum of an array 
#include <stdio.h>
int main()
{
	int sum=0,i;
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
 } 
