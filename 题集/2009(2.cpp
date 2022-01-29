#include<stdio.h>
#include<math.h>
int main()
{int m;
 double n;
 	double sum;
  while (~scanf("%lf %d",&n,&m))
  {
  
 
    int i=1;
    sum = n;
    for(i=1;i<m;i++){
    	sum +=sqrt(n);
    	n=sqrt(n);//这一步是为了在每次循环中，使得每次都能开出n+1的根
		 
    	
    	
	}
  	printf("%.2f\n",sum);
  }
  	
  	}
