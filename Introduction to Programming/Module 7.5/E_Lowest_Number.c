#include <stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int arr[N];
    
    int min=10000000;
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    for(int i=0;i<N;i++){

        if(arr[i]<min)min=arr[i];



    }
    for (int i = 0; i < N; i++)
    {
     if(arr[i]==min){
        printf("%d %d",arr[i],i+1);
        break;
     }   
    }
    
    
    return 0;
}