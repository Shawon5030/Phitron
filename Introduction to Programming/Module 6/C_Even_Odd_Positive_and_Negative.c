#include <stdio.h>
int main(){

     int T;
     scanf("%d",&T);
     int Even=0,Odd=0,Positive=0,Negative=0;
     while (T--)
     {
       int num;
       scanf("%d",&num);

       if(num==0)Even++;

       else if(num>0){
        Positive++;
        if(num%2==0)Even++;
        else{
            Odd++;
        }
       }

       else if(num<0){
        Negative++;
        if(num%2==0)Even++;
        else{
            Odd++;
        }
       }
     }
     printf("Even: %d\n Odd: %d\n Positive: %d\n Negative: %d",Even,Odd,Positive,Negative);
     
    return 0;
}