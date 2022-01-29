#include<math.h>
#include <stdio.h>
int main(){
double x1,y1,x2,y2,c,amount;
while (scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF){
  
  c = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);	
 amount = sqrt(c);
	printf("%.2lf\n",amount);
	}
	return 0;
	
	
}
