//Table Program  in C
//#include <stdio.h>
//int main()
//{
//	int i,j,n;
//	n=3;
//	j=1;
//	
//	for(i=n;i<=(n*10);i+=n)
//	{
//		printf("%3d * %2d = %3d\n",n,j,i);
//		j++;
//	}
//	
//	return 0;
//}
 
#include <stdio.h>
int main()
{
	int i,j,a;
	a=3;
	for(i=1,j=1;i<=a*10;i++)
	{
		j=a*i;
		printf("%3d  x %2d  =  %3d\n", a, i, j);
	}
	
	return 0;
}

