
#include<stdio.h>
int main()
{
    int n,a,b,c; 
    scanf("%d",&n); 
    int i,f[100];                  
    a=0,b=0,c=0;                        
    for(i=0;i<n;i++) 
       scanf("%d",&f[i]);     
    for(i=0;i<n;i++)   
       {     
       if(f[i]<0)    
         a++;       
       else if(f[i]==0)     
         b++;        
       else       
        c++;      
       }        
printf("%d %d %d",a,b,c);       
return 0;
}
