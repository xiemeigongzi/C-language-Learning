//6.  Program to concatenate two strings in C 
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]="Merry";
	char s2[]="Christmas";
	
	int n,n1,n2;
	n1=strlen(s1);
	n2=strlen(s2);
	n=n1+n2;
	char s[n];
	int i,j;
	for(i=0;i<n1;i++)
	{
		s[i]=s1[i];
	}
	
	for(i,j=0;i<n,j<n2;i++,j++)
	{
		s[i]=s2[j];
	}
	printf("s: %s",s);
}
