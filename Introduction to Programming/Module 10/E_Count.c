#include <stdio.h>
#include <string.h>
int main(){

    char str[1000001];
    scanf("%s",str);
    int sum =0;
    int i=0;
    while (str[i]!='\0')
    {
        sum+=str[i]-'0';
       
        i++;
    }
    
    printf("%d",sum);
    return 0;
}