#include <stdio.h>

void fun(int* a){

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

}

int main(){

    int arr[3]={1,2,6,3};
    int *ptr;
    ptr=arr+3;
    fun(ptr);
    printf("%d",*ptr);
    
    return 0;
}