Note: 2 Chapter Loop Examples in C

1. Simple Loop Programs 
1). Simple Counting Program in C 

2). Table of Counting Program in C

#include <stdio.h>
int main()
{
	int i,j,count;
	
	for(i=1; i<=10;i++)
	{
		for(j=i;j<=100;j+=10)
			printf(" %3d",j);
		
		printf("\n");
	}
	
	return 0;
}

OUTPUT:
   1  11  21  31  41  51  61  71  81  91
   2  12  22  32  42  52  62  72  82  92
   3  13  23  33  43  53  63  73  83  93
   4  14  24  34  44  54  64  74  84  94
   5  15  25  35  45  55  65  75  85  95
   6  16  26  36  46  56  66  76  86  96
   7  17  27  37  47  57  67  77  87  97
   8  18  28  38  48  58  68  78  88  98
   9  19  29  39  49  59  69  79  89  99
  10  20  30  40  50  60  70  80  90 100
  
  
3). Table Program  in C
#include <stdio.h>
int main()
{
	int i,j,n;
	n=3;
	j=1;
	
	for(i=n;i<=(n*10);i+=n)
	{
		printf("%3d * %2d = %3d\n",n,j,i);
		j++;
	}
	
	return 0;
}
//无语了 自己写一个

#include <stdio.h>
int main()
{
	int i,j,a;
	a=3;
	for(i=1,j=1;i<=a*10;i++)
	{
		j=a*i;
		printf("%3d  x %2d  =  %3d\n", a, i, j);
	}
	
	return 0;
}

4).Table of Tables program in C
#include <stdio.h>
int main()
{
	int i,j,count;
	int start=2, end=10;
	
	for(i=start;i<=end;i++)
	{
		count=i;
		
		for(j=1;j<=10; j++)
		{
			printf(" %3d", count*j);
		}
		
		printf("\n");
	}
	return 0;
}
// 乘法表是吧？？？

#include <stdio.h>
int main()
{
	int i,j,a;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			a=i*j;
			printf("% 3d * %2d = %3d",i,j,a);
		}
		
		printf("\n");
	}
}

#include <stdio.h>
int main()
{
	int i,j,a;
	
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			a=i*j;
			printf("% 3d * %2d = %2d  ",j,i,a);
			
		}
		
		printf("\n");
	}
}

5). Revere counting Program in C 

6). Printing even values in a loop 
#include <stdio.h>
int main()
{
	int i;

	for(i=1;i<=10;i++)
	{
		if(i%2==0)
			printf(" %2d\n",i);
	}
	return 0;
}

7). Printing odd values in a loop 
























  
