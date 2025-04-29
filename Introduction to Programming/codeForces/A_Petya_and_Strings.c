#include <stdio.h>
#include <string.h>
int main(){

    char s[101];
    char s1[101];
    scanf("%s%s",s,s1);

    int len = strlen(s);
  

    for(int i=0;i<len;i++){
        if(s[i]>=97 && s[i]<=122)s[i]=s[i]-32;
        
    }
    for(int i=0;i<len;i++){
       if(s1[i]>=97 && s1[i]<=122)s1[i]=s1[i]-32;
        
    }

    

    for(int i=0;i<=len;i++){
        if(s[i]=='\0'){
            printf("0");
            break;
        }
        else if(s[i]>s1[i])
        {
            printf("1");
            break;
        }
        else if(s[i]<s1[i]){
            printf("-1");
            break;
        }
    }
    return 0;
}