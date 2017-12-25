//7.String Anagram program in C 
// standard
// bubble sort
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[]="recitals";
	char s2[]="articels";
	int n1=strlen(s1);
	int n2=strlen(s2);
	
	int i,j;
	char p,q;
	
	if(n1==n2)
	{
		for(i=0;i<n1-1;i++)
		{
			for(j=i+1;j<n1;j++)
			{
				if(s1[i]>s1[j])
				{
					p=s1[i];
					s1[i]=s1[j];
					s1[j]=p;
				}
				
				if(s2[i]>s2[j])
				{
					q=s2[i];
					s2[i]=s2[j];
					s2[j]=q;
				}
			}
		}
	}
	else 
	{
		printf("%s and %s are not anagrams! \n", s1, s2);
	}
	
	printf("s1: %s\n",s1);
	printf("s2: %s\n",s2);
	
	for(i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
		{
			printf("%s and %s are not anagrams! \n",s1,s2);
			return 0;
		}
	}
	
	printf("Strings are anagrams! \n");
	
	char s[]="I am angry, too young too simple!";
	int n=strlen(s);
	printf("%s:%d\n",s,n);
	return 0;
}
