#include <stdio.h>
#include <string.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int max=0;
    int min=105;
    int max_idx=0;
    int min_idx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            
        }
        if(arr[i]<min){
            min=arr[i];
           
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==min){
            min_idx=i;
            
        }
    }
     
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            max_idx=i;
            break;
            
        }
    }
     
    
    int count = abs(0-max_idx)+abs(n-1-min_idx);
   
  
    if(max_idx>min_idx){
        count--;
    }
    printf("%d\n",count);
    
    return 0;
}