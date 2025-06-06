#include <stdio.h>
int main(){

    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int arr1[n];
    for(int i=0;i<n;i++){
      
        for(int j=0;j<m;j++){
            
          scanf("%d",&arr[i][j]);
        }
       
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            
            if(arr[i][j]==1){
                count++;
            }
            
        }
       
        arr1[i]=count;
        
    }
    int max =0;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            idx=i;
            break;
            
        }
    }

    

    printf("%d",idx);
    return 0;
}