#include <stdio.h>
int main(){

    int c=0;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                 
                 c+=abs(i-2);
                 c+=abs(j-2);
                 break;
            }


        }
    }
    printf("%d",c);
    return 0;
}