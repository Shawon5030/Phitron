#include <stdio.h>
int main(){

    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }

    int X,V;
    scanf("%d%d",&X,&V);
 



    
    for(int i=0;i<N;i++){
        if(i==X){
            arr[i]=V;
        }
        
    }
    
    for(int i=N-1;i>=0;i--){
       printf("%d ",arr[i]);
        
    }

    
    return 0;
}