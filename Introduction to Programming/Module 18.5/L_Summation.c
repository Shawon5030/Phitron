#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
         scanf("%d",&arr[i]);
    }
    long long int sum =0; 
    for (int i = 0; i < n; i++)
    {
         sum+=(long long int)arr[i];
    }
    printf("%lld",sum);
    return 0;
}