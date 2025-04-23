#include <stdio.h>
#include <string.h>
int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);
    char copy[100];
    strcpy(copy,a);
    int len_a= strlen(a);
    int len_b= strlen(b);
    printf("%d %d\n",len_a,len_b);

    for(int i=0;i<=len_b;i++){
        a[len_a+i]=b[i];
    }
    printf("%s\n",a);
    char tem = copy[0];
    copy[0]=b[0];
    b[0]=tem;

    printf("%s %s",copy,b);

    

    return 0;
}