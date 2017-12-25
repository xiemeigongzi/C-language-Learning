//4.Top down triangle printing in C 
#include <stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<i;j++)
			printf(" ");
		
		for(j=i;j<n;j++)
			printf(" *");
		
		printf("\n");
	}
	return 0;
	
}
