#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    int min = 1e9;
    for(int i=0;i<n;i++){
       if(arr[i]<min)min=arr[i];

    }
    int count =0;
    for(int i=0;i<n;i++){
        if(min==arr[i])count++;
    }
    
   
   if(count%2==1)printf("Lucky");
   else{
    printf("Unlucky");
   }


}