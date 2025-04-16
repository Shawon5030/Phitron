#include <stdio.h>
int main(){

    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    scanf("%d",&X);
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==X){
            printf("%d",i);
            count=1;
            break;
        }
    }
    if(count==0){
        printf("-1");
    }


    return 0;
}