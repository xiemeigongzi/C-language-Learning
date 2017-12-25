//3. Program to search strings in C 
// standard 
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]={"Beauty is in the eye of the beholder"};
   	char s2[] = "the";
   	
   	int n=0,m=0,time=0;
   	int len=strlen(s2);
   	
   	while(s1[n]!='\0')
   	{
   		if(s1[n]==s2[m])
   		{
   			while(s1[n]==s2[m] && s1[n]!='\0')
   			{
   				n++;
   				m++;
			}
			
			if(m==len)
			{
				time++;
			}
		}
		else {
			while(s1[n]!=' ')
			{
				if(s1[n]!='\0')
				{
					break;
				}
			}
		}
		n++;
		m=0;
	}
   	
	 if(time > 0) {
      printf("'%s' appears %d time(s)\n", s2, time);
   }else {
      printf("'%s' does not appear in the sentence.\n", s2);
   }

   return 0;
 } 
