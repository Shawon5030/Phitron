#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int space=n;
    int star=1;
    for(int i=1;i<=4;i++){

        for(int j=space;j>1;j--){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("\n");
        star+=2;
        space-=1;
        
    }
    return 0;
}