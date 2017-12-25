// 5.Top down right triangle printing in C 
#include <stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
			printf("* ");
		
		printf("\n");
	}
	return 0;
}

