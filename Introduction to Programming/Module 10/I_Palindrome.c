#include <stdio.h>
#include <string.h>
int main(){

    char s[1001];
    scanf("%s",s);
    int len = strlen(s);

    int count = len;
    int is_Pal = 0;

    for(int i=0;i<len/2;i++){
        if(s[i]!=s[count-1]){

            printf("NO");
            is_Pal=1;
            break;
        }
        count--;
    }
    if(is_Pal==0){
        printf("YES");
    }
    return 0;
}