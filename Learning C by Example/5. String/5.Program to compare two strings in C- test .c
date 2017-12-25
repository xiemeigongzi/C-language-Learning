//5.Program to compare two strings in C 
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]={"amazing"};
	char s2[]={"amazing"};
	
	int n1=strlen(s1);
	int n2=strlen(s2);
	
	int i;
	
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			s1[i]=s2[i];
		}
		if(i==(n1))
		{
			printf("'%s' & '%s' are identical\n",s1,s2);
		}
	}
	else 
	{
		printf(" '%s' & '%s' are not identical\n",s1,s2);
	}
	return 0;
}
