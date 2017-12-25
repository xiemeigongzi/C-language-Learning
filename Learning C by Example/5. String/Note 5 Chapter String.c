Note 5 Chapter String Examples in C
1. Basic Programs
1). Program to print a string in c
#include <stdio.h>
int main()
{
	char str[]={"Hello world"};
	printf("%s\n",str);
	
	return 0;
}


2). Program to print a string character by character in C 
#include <stdio.h>
int main()
{
	char string[]={'H','e','l','l','o',',',' ','w','o','r','l','d','!'};
	int n=sizeof(string)/sizeof(string[0]);
	int i;
	for(i=0;i<n;i++)
		printf("%c",string[i]);
	
	return 0;
}

3). Program to find string length without function in C
//standard 
#include <stdio.h>

int main() {
   char s1[] = "TajMahal";
   int i = 0;
      
   while(s1[i] != '\0') {
      i++;
   }
   
   printf("Length of string '%s' is %d", s1, i);
   
   return 0;
}

// done by  myself 
#include <stdio.h>
int main()
{
	char s1[]={"Merry Christmas!"};
	int i=0;
	
	while(s1[i]!='\0')
		i++;
	
	printf("Length of string '%s' is %d\n",s1,i);
	return 0;
}


4). Program to count character occurrent in C
//standard
#include <stdio.h>
int main()
{
	char s[]="Merry Christmas";
	char ch='a';
	
	int i=0;
	int cnt=0;
	
	while(s[i]!='\0')
	{
		if(s[i]==ch)
			cnt++;
		i++;
	}
	
	if(cnt>0)
	{
		if(cnt==1)
			printf("%c appears %d time in %s\n",ch, cnt,s);
		else 
			printf("%c appears %d times in %s\n",ch, cnt,s);
	}
	else {
		printf("%c did not appear in %s",ch,s);
	}
	return 0;
}

5). Program to count vowels occurent in C  // vowel: 元音 consonant：辅音
#include <stdio.h>
int main()
{
	char s[]="Merry Christmas!";
	int i=0;
	int vowels=0;
	int consonent=0;
	
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			vowels++;
		else 
			consonant++;
	
		i++;
	}
	printf("'%s' contains %d vowels and %d consonants",s,vowels,consonant,);
	
	return 0;
}

6). Program to sort string character in C 
// bubble sort??? 
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="Merry Christmas";
	printf("before: %s",s);
	char temp;
	int n=strlen(s);
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]<s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("after : %s",s);
	return 0;
}

2. Multi-string Program 

1). Program to copy string in C
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

	

2). Program to reverse string in C
//standard 
#include <stdio.h>

int main() {
   char s1[] = "TajMahal";    // String Given
   char s2[8];                // Variable to store reverse string

   int length = 0;
   int loop = 0;

   while(s1[length] != '\0') {
      length++;
   }

   printf("\nPrinting in reverse - ");
   for(loop = --length; loop>=0; loop--)
      printf("%c", s1[loop]);

   loop = 0;
   printf("\nStoring in reverse  - ");

   while(length >= 0) {
      s2[length] = s1[loop];
      length--;
      loop++;
   }

   s1[loop] = '\0';           // Terminates the string

   printf("%s\n", s2);

   return 0;
}
// 看standard 答案太痛苦了 我自己写一个
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
 

3). Program to search strings in C 
//3. Program to search strings in C 
// standard 
#include <stdio.h>
#include <string.h>

int main() {
   char s1[] = "Beauty is in the eye of the beholder";
   char s2[] = "the";

   int n = 0;
   int m = 0;
   int times = 0;
   int len = strlen(s2);      // contains the length of search string

   while(s1[n] != '\0') {

      if(s1[n] == s2[m]) {     // if first character of search string matches

         // keep on searching

         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }

         // if we sequence of characters matching with the length of searched string
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

            // BINGO!! we find our search string.
            times++;
         }
      }else {            // if first character of search string DOES NOT match
         while(s1[n] != ' ') {        // Skip to next word
            n++;
            if(s1[n] == '\0')
            break;
         }
      }
		
      n++;
      m=0;  // reset the counter to start from first character of the search string.
   }

   if(times > 0) {
      printf("'%s' appears %d time(s)\n", s2, times);
   }else {
      printf("'%s' does not appear in the sentence.\n", s2);
   }

   return 0;
}

//done by myself 
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
4). Program to swap strings in C 
//standard
#include <stdio.h>

int main() {
   char s1[] = "TajMahal";     
   char s2[] = "Dazzling";     
   char ch;

   int index = 0;

   //Character by Character approach

   printf("Before Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);

   while(s1[index] != '\0') {
      ch = s1[index];
      s1[index] = s2[index];
      s2[index] = ch;
      index++;
   }

   printf("After Swapping - \n");
   printf("Value of s1 - %s \n", s1);
   printf("Value of s2 - %s \n", s2);

   return 0;
}

// done by myself 
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

5). Program to compare two strings in C 
// standard
#include <stdio.h>

int main() {
   char s1[] = "advise";     
   char s2[] = "advice";
    
   int n = 0;
   unsigned short flag = 1; 
    
   while (s1[n] != '\0') {
      if(s1[n] != s2[n]) {
         flag = 0;
         break;
      }
      n++;
   }
    
   if(flag == 1) {
      printf("%s and %s are identical\n", s1, s2);
   }else {
      printf("%s and %s are NOT identical\n", s1, s2);
   }

   return 0;
}

//done by myself
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

6). Program to concatenate two strings in C 
// standard 
#include <stdio.h>
#include <string.h>

int main() {
   char s1[10] = "Taj";
   char s2[] = "Mahal";
    
   int i, j, n1, n2;
    
   n1 = strlen(s1);
   n2 = strlen(s2);
    
   j=0;
   for(i = n1; i<n1+n2; i++ ) {
      s1[i] = s2[j];
      j++;
   }
    
   s1[i] = '\0';

   printf("%s", s1);

   return 0;
}

// done by myself
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


7). String Anagram program in C  
/*所谓 anagram, 就是两个词所用的字母及其个数都是一样的，
  但是，字母的位置不一样。比如 abcc 和 cbca 就是 anagram.*/
 
//standard
#include <stdio.h>
#include <string.h>

int main (void) {
   char s1[] = "recitals";
   char s2[] = "articles";

   char temp;

   int i, j;
   int n  = strlen(s1);
   int n1 = strlen(s2);

   // If both strings are of different length, then they are not anagrams

   if( n != n1) {    
      printf("%s and %s are not anagrams! \n", s1, s2);
      return 0;
   }
   
   // lets sort both strings first −

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
         if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<n; i++) {
      if(s1[i] != s2[i]) {    
         printf("Strings are not anagrams! \n", s1, s2);
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}

// done by myself 

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
	return 0;
}

3. Long String Programs 
1). reverse words in a line 
// 我自己做不出来


2). reverse a line 
// 我自己做不出来