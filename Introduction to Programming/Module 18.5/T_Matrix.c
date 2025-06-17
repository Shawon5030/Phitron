#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    long long int sum_pri = 0;
    long long int sum_sec = 0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(i==j){
                sum_pri+=(long long int)arr[i][j];
            }
            if(i+j==n-1){
                sum_sec+=(long long int)arr[i][j];
            }
        }
    }
    long long int abs_sum = llabs(sum_pri-sum_sec);

    printf("%lld",abs_sum);
    return 0;
}