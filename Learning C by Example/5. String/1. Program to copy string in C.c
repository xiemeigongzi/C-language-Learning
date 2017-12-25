//1. Program to copy string in C
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]="Merry Christmas";
	int n=strlen(s1);
	char s2[n];
	
	int i=0;
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("s1= %s\n",s1);
	printf("s2= %s\n",s2);
} 
