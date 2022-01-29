#include<stdio.h>

int main()

{

    int m,b[10];
    int i = 0;

    int sum = 1;

    int q = 0;

    scanf("%d", &m);

    for(i=0;i<m;i++)            

scanf("%d", &b[i]);

    for (; q < m; q++){

        if (b[q] % 2 != 0){

            sum *= b[q];

        }

    }

    printf("%d", sum);
	
	
}
	
	


  














 
