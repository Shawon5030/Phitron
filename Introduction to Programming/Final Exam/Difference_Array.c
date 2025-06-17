#include <stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);

        int arr[n];
        int copy_arr[n];
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);

        for(int i=0;i<n;i++){
            copy_arr[i]=arr[i];
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){

                
                if(arr[j]>arr[j+1]){
                    int tem=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tem;
                }

            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",abs(arr[i]-copy_arr[i]));
        }
        printf("\n");
        
    }
    

    return 0;
}