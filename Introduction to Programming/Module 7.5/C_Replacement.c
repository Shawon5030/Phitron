#include <stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int arr[N];


    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    
    for(int i=0;i<N;i++){
        if(arr[i]>0)printf("1 ");
        else if (arr[i]==0)printf("0 ");
        else{
            printf("2 ");
        }
        
    }


    return 0;
}