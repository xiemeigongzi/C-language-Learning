//1. reverse words in a line 
//standard 
#include <stdio.h>
#include <string.h>
char word_reverse(char s[])
{
	int n=strlen(s);
	char r[n];
	int i;
	for(i=0;i<n;i++)
	{
		r[i]=s[n-i-1];
	}
	r[i+1]='\0';
//	printf("%s\n",r);
	return r[n];
}

int main()
{
	char line[]="Merry Christmas, God Bless You!";
	int n=strlen(line);
	char reverse[n], temp[n];
	printf("n= %d\n",n);
	
	int i=0,j=0;
	while(line[i]!='\0')
	{
		while(i<n && line[i]!=' ')
		{
			temp[j]=line[i];
			j++;
			i++;
		}
		temp[j]='\0';
		
		word_reverse(temp);
		
		strcat(reverse,temp);
		strcat(temp," ");
	}
	 printf("Original - %s\n", line);
   printf("Reversed - %s\n",reverse);
	
	
}
