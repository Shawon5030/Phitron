#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);


    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d",j+1);
        }
        printf("\n");
      
    }
    for(int i=n;i>0;i--){

        for(int j=i-1;j<n;j++){
            
            printf(" ");
        }
        
        
        for(int j=1;j<i;j++){
            
            printf("%d",j);
        }
        printf("\n");
      
    }
    return 0;
}