//6. Floyd's triangle printing in C
#include  <stdio.h>
int main()
{
	int a=5,i,j,k=1;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
			printf("%3d",k++);
		
		printf("\n");
	}
	return 0;
}
