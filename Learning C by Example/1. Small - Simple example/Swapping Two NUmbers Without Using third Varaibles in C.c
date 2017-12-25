// Swapping Two NUmbers Without Using third Varaibles in C 
#include <stdio.h>
int main()
{
	int a=11, b=99;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
