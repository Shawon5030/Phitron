#include <stdio.h>
#include <limits.h>

int max(int a[],int n){
    
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]>m)m=a[i];
    }
    return m;
}
int min(int a[],int n){

    int min_va=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min_va)min_va=a[i];
    }
    return min_va;
}
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    int max_vale = max(arr,n);
    int min_vale = min(arr,n);

    printf("%d %d",min_vale,max_vale);
    return 0;
}