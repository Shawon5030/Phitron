#include <stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int count=0;
    for(int i =1;i<=N;i++){
        if(i%2==0){
            printf("%d\n",i);
            count++;
        }
    }
    if(!count){
        printf("-1");
    }
}