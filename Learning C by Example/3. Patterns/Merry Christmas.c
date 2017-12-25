//Merry Christmas 
#include <stdio.h>
void print_level(int n,int level)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=level+n-i;j++)
			printf(" ");
			
		for(j=1;j<=i;j++)
			printf("* ");
			
		printf("\n");
	}
}

int main()
{
	int i=0;
	print_level(5,13);
	print_level(8,10);
	print_level(15,3);
	
	return 0;
}
