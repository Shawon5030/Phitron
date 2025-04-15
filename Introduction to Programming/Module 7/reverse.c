#include <stdio.h>
int main(){

    int size_n;
    scanf("%d",&size_n);
    int arr[size_n];

    for(int i=0;i<size_n;i++)scanf("%d",&arr[i]);
    for(int i=size_n-1;i>=0;i--)printf("%d ",arr[i]);

    
    return 0;
}