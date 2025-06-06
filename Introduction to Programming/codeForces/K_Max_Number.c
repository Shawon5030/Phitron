#include <stdio.h>

int FindMax(int arr[],int n,int idx){

    if(idx==n-1)return arr[n-1];
    int max = FindMax(arr,n,idx+1);

    if(arr[idx]>max)return arr[idx];
    else{
        return max;
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    
    int max= FindMax(arr,n,0);
    printf("%d",max);
    return 0;
}