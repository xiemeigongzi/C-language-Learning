//6. Program to sort string character in C 
// bubble sort 
// ���OUTPUT ������ Ҫ���¿� 
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j; 
	char temp;
	char s[]="Merry Christmas";
//	int n=sizeof(s)/sizeof(s[0]);
//	printf("n=%d\n",n);
	
	int n=strlen(s); // important : ��������� Ҫ��Ȼû�������� 
	 
	printf("before: %s\n",s);
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
//	for(i=0;i<n;i++)
//	{
//		printf("%c",s[i]);
//	}

//	printf("after: -%s",s);
	printf("String after sorting  %s ",s);
	return 0;
}
