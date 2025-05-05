#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int start = n;
    for(int i=0;i<n;i++){
        for(int i=start;i>=1;i--){
            printf("*");
        }
        start-=1;
        printf("\n");
    }
    return 0;
}