#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int flag =0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            flag=1;
            printf("HARD");
            break;
        }
    }

    if(flag==0){
        printf("EASY");
    }
    return 0;
}