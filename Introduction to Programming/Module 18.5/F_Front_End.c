#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    
    for(int i=0,j=n-1;i<j;i++,j--){
        printf("%d ",arr[i]);
        printf("%d ",arr[j]);
    }
    
    if(n%2==1){
        printf("%d",arr[n/2]);
    }
    return 0;
}