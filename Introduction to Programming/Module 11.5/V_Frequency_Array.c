#include <stdio.h>
int main(){

    int size,max;
    scanf("%d %d",&size,&max);
  

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    

    int fre[100001] = {0};
    for(int i=0;i<size;i++){
        int val = arr[i];
        fre[val]++;
    }

    for(int i=1;i<=max;i++){
        printf("%d\n",fre[i]);
    }
    return 0;
}