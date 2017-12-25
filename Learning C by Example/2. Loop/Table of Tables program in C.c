//Table of Tables program in C
//#include <stdio.h>
//int main()
//{
//	int i,j,count;
//	int start=2, end=10;
//	
//	for(i=start;i<=end;i++)
//	{
//		count=i;
//		
//		for(j=1;j<=10; j++)
//		{
//			printf(" %3d", count*j);
//		}
//		
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i,j,a;
	
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			a=i*j;
			printf("% 3d * %2d = %2d  ",j,i,a);
			
		}
		
		printf("\n");
	}
}
