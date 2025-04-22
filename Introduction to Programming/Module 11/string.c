#include <stdio.h>
#include <string.h>

int main(){

    char a[110],b[100];
    scanf("%s %s",a,b);

    // int len = strlen(b);

    // for(int i=0;i<=len;i++)a[i]=b[i];
    // printf("%s %s",a,b);
    strcpy(a,b);
    printf("%s %s",a,b);
    
    return 0;
}