#include <stdio.h>
int main(){

    int T;
    scanf("%d",&T);
    long long int sum=0;
    while(T--){
        int num;
        scanf("%d",&num);
        sum+=(long long int)num;
    }
    if(sum<0){
        printf("%lld",sum*(-1));
    }
    else{
        printf("%lld",sum);
    }
    return 0;
}