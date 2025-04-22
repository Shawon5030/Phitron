#include <stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    int arr[t];
    for(int i=0;i<t;i++)scanf("%d",&arr[i]);

    int is_pal=1;
    int count=t-1;
    for(int i=0;i<=t/2;i++){
        if(arr[i]!=arr[count]){
            is_pal=0;
        }
        count--;
    }
    if(is_pal==1)printf("YES");
    else{
        printf("NO");
    }
    return 0;
}