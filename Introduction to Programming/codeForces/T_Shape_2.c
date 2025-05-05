#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int space=n;
    int star=1;
    for(int i=1;i<=4;i++){

        for(int j=space;j>;j--){
            printf(" ");
        }
        for(int k=star;k<0;k++){
            printf("*");
        }
        star+=2;
        space-=1;
        
    }
    return 0;
}