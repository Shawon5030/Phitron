#include <stdio.h>
int main(){

    int n,k;
    scanf("%d %d",&n,&k);
    int target = 240-k;
    int sum=0;
    int count=0;
    for(int i=1;i<=n;i++){
        sum+=5*i;
        if(sum<=target){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}