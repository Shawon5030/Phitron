#include <stdio.h>
#include <string.h>
int main(){

    char s[101];
    scanf("%s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<strlen(s);j++){
            if(s[i]==s[j]){
                printf("%c ",s[i]);
                printf("\n%c ",s[j]);
                count=count+1;
                break;
            }
        }
    }

    printf("%d",count);
    

    return 0;
}