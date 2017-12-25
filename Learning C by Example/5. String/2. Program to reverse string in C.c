//2. Program to reverse string in C 
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]={"Merry Christmas"};
	int n=strlen(s1);
	printf("n=%d\n",n);
	char s2[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		s2[i]=s1[n-1-i];
	}
	s2[i]='\0';
	printf("s1= %s\n",s1);
	printf("s2= %s\n",s2);
	return 0;
} 
 
