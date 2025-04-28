#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    int idx;
    scanf("%d",&idx);

    for(int i=0;i<n;i++){
        if(i==(idx-1)){
            if(arr[i]==0)arr[i]=1;
            else{
                arr[i]=0;
            }
        }
    }

      for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}