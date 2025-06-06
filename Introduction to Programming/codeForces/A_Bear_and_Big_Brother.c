#include <stdio.h>
int main(){

    int l ,b;
    scanf("%d%d",&l,&b);
    for(int i=1;i<=b;i++){
        l=l*3*i;
        b=b*2*i;

        if(b<l){
            printf("%d",i);
            break;
        }
        
    }
    return 0;
}
