#include <stdio.h>
#include <string.h>
int main(){

    char s[101];
    scanf("%s",&s);
    int i=0;
    int len=0;
    while (s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d\n",len);
    printf("%d\n",strlen(s));
    
    return 0;
}