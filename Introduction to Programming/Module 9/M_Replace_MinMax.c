#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int ind_max=0;
    int min=INT_MAX;
    int ind_min=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            ind_max=i;

        }
        if(arr[i]<min)
        {
            min=arr[i];
            ind_min=i;

        }
    }

   for(int i=0;i<n;i++){
    if(i==ind_min)arr[i]=max;
    if(i==ind_max)arr[i]=min;
   }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }


    
    return 0;
}