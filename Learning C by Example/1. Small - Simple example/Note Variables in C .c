Note 
Chapter-1 Small&Simple Program in Chapter-1

1.Basic Programs
1). Variables in C
char     %c  
int      %d 
float    %f
double   %e
void     N/A

2). Arithmetic Operations in C
Addition 
Subtraction 
Multiplication 
Division 

2.General Programs
1). Compare two integers 

2). Compare three integers 
example:

#include <stdio.h>
int main()
{
	int a,b,c;
	a=11;
	b=22;
	c=33;
	
	if(a>b&& a>c)
		printf("%d is the largest\n",a);
	else if (b>a &&b>c )
		printf("%d is the largest\n",b);
	else if (c>a &&c>b )
		printf("%d is the largest\n",c);
	else 
		printf("values are not unique");
	
	return 0;
}

done by myself:
#include <stdio.h>
int main()
{
	int a=11,b=22,c=33;
	if(a>b)
	{
		if(a>c)
			printf("%d is the largest\n",a);
		else 
			printf("%d is the largest\n",c);
	}
	else //a<b
	{
		if(c>b)
			printf("%d is the largest\n",c);
		else 
			printf("%d is the largest\n",b);
	}
	
	if(a==b ||a==c || b==c)
		printf("values are not unique");
	
	return 0;
}

3). Find Even Odd Program in C 

4). Find Positive-Negative Program in C 
	
5). Leap Year Program IN  C  
#include <stdio.h>
int main()
{
	int year=2016;
	
	if(((year%4==0) && (year%100!=0))||(year%400==0))
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
	
	return 0;
}

6). Swapping Two NUmbers Using third Varaibles in C 
#include <stdio.h>
int main()
{
	int a,b, temp;
	a=11;
	b=99;
	
	temp=a;
	a=b;
	b=temp;
	
	return 0;
}

7). Swapping Two NUmbers Without Using third Varaibles in C 

#include <stdio.h>
int main()
{
	int a=11,b=99;
	a=a+b;
	b=a-b;
	a=a-b;
	
	return 0;
}