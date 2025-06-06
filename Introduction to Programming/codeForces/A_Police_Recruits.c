#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

   
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int free_police =0;
    int crime=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            crime++;
            
            if(free_police>0){
                crime--;
                free_police--;
            }
        }
       
        else if(arr[i]>-1){
            free_police+=arr[i];
        }
    }
    printf("%d",crime);  
    return 0;
}