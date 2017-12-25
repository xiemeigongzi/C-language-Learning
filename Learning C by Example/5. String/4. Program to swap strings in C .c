//4. Program to swap strings in C 
#include <stdio.h>
#include <string.h>
#define len 12
int main()
{
	char s1[len]="amazing";
	char s2[len]="interesting";
	char ch;
	 printf("Before Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);
	int n,n1,n2;
	n1=strlen(s1);
	n2=strlen(s2);
	
	if(n1>n2)
		n=n1;
	else 
		n=n2;
	
	int i;
	for(i=0;i<n;i++)
	{
		ch=s1[i];
		s1[i]=s2[i];
		s2[i]=ch;
	}
	
	 printf("After Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);
}


