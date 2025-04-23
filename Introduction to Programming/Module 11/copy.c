#include <stdio.h>
int main(){

    int a[100],b[100];
    scanf("%s",a);

    for(int i=0;i<strlen(a);i++){
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}