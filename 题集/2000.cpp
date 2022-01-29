#include<stdio.h>
int main(){
char a,b,c,d;
while(scanf(" %c%c%c",&a,&b,&c)!=EOF)
{


 if(a>b) d=a,a=b,b=d;  
 if(a>c) d=a,a=c,c=d;
 if(b>c) d=b,b=c,c=d;
 printf("按各字符的ASCII码从小到大的顺序为：%c %c %c\n",a,b,c);
}
} 
