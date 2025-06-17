#include <stdio.h>
int main(){

    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int first_d=0;
    int second_d =0;
    int out_of_dai =0;
    if(n!=m)printf("NO\n");

    else{

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            if(first_d==1 || second_d==1|| out_of_dai==1)break;
            for(int j=0;j<m;j++){
                
                if(arr[i][j]!=1 && i==j){
                    first_d=1;
                    break;
                }
                if(arr[i][j]!=1 && i+j==n-1){
                    second_d=1;
                    break;
                }
                if(i!=j){
                    if(i+j!=n-1){
                    if(arr[i][j]!=0){
                        out_of_dai=1;
                        break;
                    }
                    }
                    
                    
                }
                
            }
            
        }

        if(first_d==1||second_d==1|| out_of_dai==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    
    return 0;
}