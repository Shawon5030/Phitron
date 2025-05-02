#include <stdio.h>
#include <string.h>
int main(){

    char a[1000];
    scanf("%s",a);

    if(a[0]==a[strlen(a)-1])printf("Yes");
    else{
        printf("No");
    }
    return 0;
}