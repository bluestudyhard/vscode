#include<stdio.h>
int main(void) 
   {int x;   	
    int n=0;
    scanf("%d",&x);
    	n++; //因为考虑到0的情况，所以需要这两个东东 
   		x/=10;
   		
   	//while 的意思就是，只有输入的值满足条件，他就会进入循环，直到不能满足条件
	  // 为止，像输入300，他300除到第三次就不能除得尽10了，所以会跳出循环输出 
   	while(x>0){
   		n++;
   		x/=10;
   		if(x<0){
   			x=-x;
   			n++;
   			x/=10;
   			printf("%d\n",n);
		   }
	   }
   	printf("%d\n",n);
   	
}
