//3. Program to search strings in C 
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Beauty is in the eye of the beholder";
   	char s2[] = "the";
   	
   	int i=0,j=0;
   	int times=0;
   	int n=strlen(s2);
   	
   	while(s1[i]!='\0')
   	{
   	
   			while(s1[i]==s2[j]  )
		   {
		   		i++;
		   		j++;
		   }
		   
		   if(j==n)
		   {
		   	 times++;
		   }
		
		i++;
		j=0;	
	}
	  if(times > 0) {
      printf("'%s' appears %d time(s)\n", s2, times);
   }else {
      printf("'%s' does not appear in the sentence.\n", s2);
   } 
	   
   return 0;
}
