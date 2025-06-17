#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int Num_obb=0;
    for(int i=1;i<=n;i++){
        if(i%2==1)Num_obb++;
    }
    int space =4+Num_obb;
    int star=1;
    for(int i=0;i<5+Num_obb;i++){
     

            for(int j=0;j<space;j++){
                printf(" ");
            }
            for(int j=1;j<=star;j++){
                printf("*");
            }
      
        star+=2;
        space--;
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}