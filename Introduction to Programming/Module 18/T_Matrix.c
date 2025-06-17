#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    long long int fis_diago=0;
    long long int second_diago=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++) {
            if(i==j){
                fis_diago+=(long long int)arr[i][j];
            }
            if (i+j==n-1)
            {
                second_diago+=(long long int)arr[i][j];
            }
            
        }
    }
    long long int sum = llabs(second_diago-fis_diago);
    printf("%lld",sum);
    return 0;
}