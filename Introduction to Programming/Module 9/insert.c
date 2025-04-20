#include <stdio.h>
int main(){

    int array_size;
    scanf("%d",&array_size);
    int arr[array_size];

    for(int i=0;i<array_size ;i++){
        scanf("%d",&arr[i]);
    }
    int indx;
    scanf("%d",&indx);
 
    for(int i=indx;i<array_size;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<array_size-1 ;i++){
        printf("%d ",arr[i]);
    }



    

    return 0;
}