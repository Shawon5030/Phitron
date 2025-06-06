#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int count=0;
    while (1)
    {  
        if(n==0)break;

       if(n>=1 && n<5){
        n--;
        count++;
       }
       else if(n>=5 && n<10){
        n=n-5;
        count++;
       }
       else if(n>=10 && n<20){
        n=n-10;
        count++;
       }
       else if(n>=20 && n<100){
        n=n-20;
        count++;
       }
       else if(n>=100){
        n=n-100;
        count++;
       }
    }
    printf("%d",count);
    
    return 0;
}