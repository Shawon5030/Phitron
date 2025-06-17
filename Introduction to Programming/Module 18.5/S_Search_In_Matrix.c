#include <stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int target;
    scanf("%d",&target);
    int flag=0;
    for(int i=0;i<n;i++){
        if(flag==1)break;
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                printf("will not take number");
                flag=1;
                break;

            }
        }
    }

    if(flag==0){
        printf("will take number");

    }
    return 0;
}