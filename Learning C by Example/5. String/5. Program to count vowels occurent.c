//5. Program to count vowels occurent in C  // vowel: ÔªÒô consonant£º¸¨Òô
#include <stdio.h>
int main()
{
	char s[]={"Merry Christmas!"};
	int i=0;
	int vowels=0;
	int consonent=0;
	
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			vowels++;
		else 
			consonent++;
			
		i++;
	}
	printf(" '%s' contains %d vowels and %d consonants",s,vowels,consonent);
	
	return 0;
}
