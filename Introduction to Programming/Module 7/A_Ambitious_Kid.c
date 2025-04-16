#include <stdio.h>
int main(){

    int T;
    scanf("%d",&T);
    int min=1000000;

    while (T--)
    {
       int num;
       scanf("%d",&num);
      

       if(num<0){

        num*=-1;

       }
       if(num<min)min=num;
    }
    printf("%d\n",min);
    
    return 0;
}