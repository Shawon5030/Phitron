#include <stdio.h>

void one_to_n(int n)
{   
    if(n==0){
        return;
    }
    one_to_n(n-1);
    printf("%d\n",n);
}

int main(){

    int n;
    scanf("%d",&n);
    one_to_n(n);
    return 0;
}