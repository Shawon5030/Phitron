#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int for_2=0;
    int for_3=0;
    for(int i=0;i<n;i++){

        if(arr[i]%2==0 && arr[i]%3!=0 )for_2++;
        else if(arr[i]%2==0 && arr[i]%3==0)for_2++;
        else if(arr[i]%3==0)for_3++;
    }

    printf("%d %d",for_2,for_3);
    return 0;
}