Note 3 Chapter Patterns Examples in C 
1. Equilateral triangle printing in C 
#include <stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(j=1;j<=i;j++)
			printf("* "）；
		
		printf("\n");
	}
	return 0;
}

2. Right triangle printing 
#include <stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=1;i<=n; i++)
	{
		for(j=1,j<=i;j++)
			printf("* ");
		
		printf("\n");
	}
	return 0;
}

3. Up-side down triangle printing 
#include <stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
			printf(" ");
		
		for(j=i;j<=n;j++)
			printf("* ");
		
		printf("\n");
	}
	return 0;
}

OUTPUT:
* * * * *
 * * * *
  * * *
   * *
    *
	
4.Top down triangle printing in C 
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

OUTPUT:
 * * * * *
 * * * *
 * * *
 * *
 *
 
 5.Top down right triangle printing in C 
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

OUTPUT:
* * * * *
* * * *
* * *
* *
*


6. Floyd's triangle printing in C
#include  <stdio.h>
int main()
{
	int a=5,i,j,k=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%3d",k++);
		
		printf("\n");
	}
	return 0;
}

7. Pascal's Triangle Printing in C 
#include <stdio.h>

int factorial(int n)
{
	int f;
	
	for(f=1;n>1;n--)
		f=f*n;
	
	return f;
}

int ncr(int n, int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
	int n=5,i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;i++)
			printf(" ");
		
		for(j=0;j<=i;j++)
			printf("%3d",ncr(i,j));
		
		printf("\n");
	}
}

OUTPUT:
               1
             1   1
           1   2   1
         1   3   3   1
       1   4   6   4   1
     1   5  10  10   5   1
	 
	 
	
	
















	

	
	