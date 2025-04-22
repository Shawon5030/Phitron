#include <stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);
   
    int arr1[a];
    int arr2[b];

    for(int i=0;i<a;i++)scanf("%d",&arr1[i]);
    for(int i=0;i<b;i++)scanf("%d",&arr2[i]);
  

    int arr[a+b];
    for(int i=0;i<a;i++){
        arr[i] = arr1[i];
    }
    for(int i=a,j=0;i<a+b;i++,j++){
        arr[i]=arr2[j];
    }
    for(int i=0;i<a+b;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}