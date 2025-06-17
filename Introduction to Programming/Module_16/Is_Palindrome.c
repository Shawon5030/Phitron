#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]){
    int len =strlen(s);
    int is_pal=1;
    for(int i=0,j=len-1;i<len/2;i++,j--){
        if(s[i]!=s[j]){
            is_pal=0;
        }
    }
    return is_pal;
}
int main(){

    char s[1000+1];
    scanf("%s",s);
    int result = is_palindrome(s);
    if(result==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}