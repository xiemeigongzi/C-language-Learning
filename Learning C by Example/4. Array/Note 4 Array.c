Note 4 Chapter Array Examples in C
1. Simple Array Programs 
1). Program to print an array 

2). Program to print an array in reverse order 

#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop;

   for(loop = 9; loop >= 0; loop--)
      printf("%d ", array[loop]);
      
   return 0;
}

3). Program to calculate sum of an array 

4).  Program to avaerage of an array 

5). Program to find  the largest element of an array 

6). Program to find the second largest element of an array 
// 下面是网站给的答案，太长不想看
#include <stdio.h>

int main() {
   int array[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int loop, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   }else {
      largest = array[1];
      second  = array[0];
   }

   for(loop = 2; loop < 10; loop++) {
      if( largest < array[loop] ) {
         second = largest;
         largest = array[loop];
      }else if( second < array[loop] ) {
         second =  array[loop];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}

// 我自己写了一个：
#include <stdio.h>
int main()
{
	int max=0,i,sub_max;
	int a[]={1,2,3,4,5,8,7,6,9};
	int n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		sub_max=max;
		if(max<a[i])
		{
			max=a[i];
		}
	 } 
	printf("%d",sub_max); 
	return 0;
}

7). Program to find the smallest element of an array 


2. Multi Array Programs 
1). Program to copy an array to another array 

2). Program to copy an array to another array in reverse 
//standard 
#include <stdio.h>

int main() {
   int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int copied[10];
   int loop, count;
   
   count = 9;
   
   for(loop = 0; loop < 10; loop++) {
      copied[count] = original[loop];
      count--;
   }
      
   printf("original -> copied \n");
   
   for(loop = 0; loop < 10; loop++) {
      printf("   %2d        %2d\n", original[loop], copied[loop]);
   }

// done by myself 
#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	int copy[n];
	int i;
	for(i=0;i<n;i++)
	{
		copy[i]=a[n-1-i];
	}
	
	printf(" a  copy\n");
	for(i=0;i<n;i++)
	{
		printf(" %d   %d \n",a[i], copy[i]);
	}
	
	return 0;
}
   
   return 0;
}

3). Program to divide one array into two arrays 
//standard 
#include <stdio.h>

int main() {
   int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int even[10], odd[10];
   int loop, e, d;
   
   e = d = 0;
   
   for(loop = 0; loop < 10; loop++) {
      if(array[loop]%2 == 0) {
         even[e] = array[loop];
         e++;
      }else {
         odd[d] = array[loop];
         d++;
      }
   }
      
   printf(" original -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
       
   printf("\n even -> ");
   for(loop = 0; loop < e; loop++)
      printf(" %d", even[loop]);   

   printf("\n odd -> ");
   for(loop = 0; loop < d; loop++)
      printf(" %d", odd[loop]);   
   
   return 0;
}

// done by myself 
#include <stdio.h>
void print(int a[],int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	int odd[n];
	int even[n];
	int i=0,j=0,k=0;
	while(i<n)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else 
		{
			odd[k]=a[i];
			k++;
		}
		i++;
	}
	
	print(a,n);
	print(even,j);
	print(odd,k);
	
}

4). Program to concatenate arrays 
// standard 
#include <stdio.h>

int main() {
   int array[10];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};
   
   int loop, index, e_len, o_len;
   
   e_len = o_len = 5;
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }

   printf("\nEven -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   printf("\nOdd  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);

   printf("\nConcat -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
   
   return 0;
}

// done by myself 
#include <stdio.h>

void print(int a[],int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}

int main()
{
	int even[5]={0,2,4,6,8};
	int odd[5]={1,3,5,7,9};
	int a[10];
	int i,j,k;
	
		for(i=0,j=0;j<5;i++,j++)
		{
			a[i]=even[j];
		}

		for(k=0;k<5;k++,i++)
		{
			a[i]=odd[k];
		}
	
	print(a,10);
	return 0;
}

