#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        
        
    }
    int flag = 0;
    if(r==c){
        for(int i=0;i<r;i++){
           for(int j=0;j<r;j++){
                if(i!=j){
                    if(arr[i][j]!=0){
                        printf("not a diagonal");
                        flag = 1;
                        break;
                        
                    }
                }
           }
        }
        if(flag==0){
            printf("It's a primary diagonal");
        }
    }
    
    else{
        printf("It's not a primary diagonal");
    }
    
}