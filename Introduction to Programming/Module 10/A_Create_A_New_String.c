#include <stdio.h>
#include <string.h>
int main(){

    char fir_str[1001];
    char sec_str[1001];
    scanf("%s",fir_str);
    scanf("%s",sec_str);
    int first = strlen(fir_str);
    int second = strlen(sec_str);
    printf("%d %d\n",first,second);

    printf("%s %s",fir_str,sec_str);
    return 0;
}