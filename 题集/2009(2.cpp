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
    	n=sqrt(n);//��һ����Ϊ����ÿ��ѭ���У�ʹ��ÿ�ζ��ܿ���n+1�ĸ�
		 
    	
    	
	}
  	printf("%.2f\n",sum);
  }
  	
  	}
