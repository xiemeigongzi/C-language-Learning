//4. Program to count character occurrent in C
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
			printf("%c appears %d time in '%s'\n",ch, cnt,s);
		else 
			printf("%c appears %d times in '%s'\n",ch, cnt,s);
	}
	else {
		printf("%c did not appear in '%s'",ch,s);
	}
	return 0;
}

