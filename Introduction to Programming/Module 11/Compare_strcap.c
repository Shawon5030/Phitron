#include <stdio.h>
#include <string.h>
int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);

    int com = strcmp(a,b);
    if(com>0)printf("%s",b);
    else if(com<0)printf("%s",a);
    else{
        printf("%s",a);
    }
    return 0;
}