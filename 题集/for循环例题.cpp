#include<stdio.h>
int main()
{  int n;
   scanf("%d",&n);
   int fact = 1;
  
   for(int i = 1;i<=n;i++){//for循环的三个条件，第一个i=1是初始条件，
   //2是循环继续的条件，3是每次循环要做的事 
   //一开始i=1，n=4，i进去后，与fact乘=1，不满足，再回去，i就变成了2，再回去
   //回去后2与fact=1乘，还是2，再回去，变成3x2，以此类推 
   // For等于对于，for对于一开始的i=1，当i<=n时重复做循环体，每次都加一，直到不满足i<=n。 
   	fact*= i;//fact=fact*i; 一般要定义三个函数，作累乘。 
   	
   	
   	
   	
   }
	printf("%d!=%d\n",n,fact);
	


} 
