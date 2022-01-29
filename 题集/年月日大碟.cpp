#include<stdio.h>
int main(){ 
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int year,month,day;

   while (~scanf("%d/%d/%d", &year,&month,&day))
 
{ 
   
     if(year%4 == 0&&year % 100 != 0||year%400 == 0){
 	  mon[1]=29;
 }    
     else mon[1]=28;
      int sum = 0;
      int i = 0;
    for(i = 0;i<month-1;i++){ 
    
    sum += mon[i];
    
 }		                            //if(year%4==0&&year%100!=0||year%400 == 0)
     printf("%d\n",sum + day);
} 
   return 0;
}
			
			
			
			
			
		
	
	
 
  


 
 	
 	
 	
 	
  

