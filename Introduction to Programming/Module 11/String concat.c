#include <stdio.h>
#include <string.h>
int main(){

    char a[101],b[100];
    scanf("%s %s",a,b);
    printf("%s %s",a,b);

    int len_b = strlen(b);
    int len_a = strlen(a);
    
    for(int i=len_a,j=0;i<len_a+len_b;i++,j++){

        a[i]=b[j];


    }
    printf("%s %s",a,b);
    return 0;
}