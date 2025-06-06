#include <stdio.h>
int main(){

    int n,k;
    scanf("%d%d",&n,&k);
   
    int arr[1001];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int tem = arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }

    for(int i=0,j=n-1;i<j;){
        if(arr[i]+arr[j]<=k)
        {
            count++;
            i++;
            j--;
        }
        else{
            
            j--;
        }
    }
    printf("%d",count);
    return 0;
}