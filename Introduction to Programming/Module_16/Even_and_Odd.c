#include <stdio.h>

void odd_even(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    int count_E=0;
    int count_O=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_E++;
        }
        else{
            count_O++;
        }
    }

    printf("%d %d",count_E,count_O);
}
int main(){

    odd_even();
    return 0;
}