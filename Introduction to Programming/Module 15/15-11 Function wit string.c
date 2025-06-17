#include <stdio.h>

void fun(char s[]){

    printf("%s\n",s);
    printf("%d\n",strlen(s));
}

int main(){
    char str[10];
    scanf("%s",str);
    fun(str);
    printf("%s",str);
}