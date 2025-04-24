#include <stdio.h>
int main(){

    int m,n;
    scanf("%d %d",&n,&m);

    int arr[n];

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
 
    int new_arr[100001]={0};
    for(int i=0;i<n;i++){
        int val = arr[i];
        new_arr[val]++;
    }

    for(int i=1;i<=m;i++){
        printf("%d\n",new_arr[i]);
    }
    return 0;
}