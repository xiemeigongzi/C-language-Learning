// 2. Program to print a string character by character in C 
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
