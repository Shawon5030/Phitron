#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a+1<b){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}