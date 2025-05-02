#include <stdio.h>
#include <string.h>
 
int main(){
 
    char s[101];
    char t[101];
 
    scanf("%s %s",s,t);
 
    int s_len = strlen(s);
    int t_len = strlen(t);
    int max=0;
    if(s_len>t_len)max=s_len;
    else{
        max=t_len;
    }
    
 
    
    int count=0;
    for(int i=0,j=strlen(t)-1;i<max;i++,j--){
        if(s[i]!=t[j]){
            printf("NO");
            count=1;
            break;
        }
    }
    if(count==0)printf("YES");
    return 0;
}