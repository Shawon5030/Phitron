#include <stdio.h>
void N_2_one(int n){
    if(n==0)return;
    else if(n==1){
        printf("%d",n);
    }
    else{
    printf("%d ",n);
    }
    
    
    N_2_one(n-1);
}
int main(){

    int n;
    scanf("%d",&n);
    N_2_one(n);
    return 0;
}