//3. Program to find string length without function in C
#include <stdio.h>
int main()
{
	char s[]={"Merry Christmas!"};
	int i=0;
	
	while(s[i]!='\0')
	i++;
	
	printf("%s : %d",s,i);
}
