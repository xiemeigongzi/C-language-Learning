//3. Program to find string length without function in C
#include <stdio.h>
int main()
{
	char s[]={"Merry Christmas!"};
	int n=sizeof(s)/sizeof(s[0]);
	printf("%s : %d",s,n-1);
	return 0;
}
