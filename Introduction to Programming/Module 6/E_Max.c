#include <stdio.h>
#include <limits.h>
int main(){

     int T;
     int max=INT_MIN;
     scanf("%d",&T);
     while (T--)
     {
        int num;
        scanf("%d",&num);
        if(num>max)max=num;
        
        
     }
     printf("%d",max);
     
    return 0;
}