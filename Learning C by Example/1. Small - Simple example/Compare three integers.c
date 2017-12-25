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
