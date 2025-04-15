#include <stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);
    if(amount<=1000)printf("Bad luck!");
    else if(amount>1000){
        printf("I will buy Punjabi\n");
        amount=amount-1000;
        if(amount>=500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    
    
}