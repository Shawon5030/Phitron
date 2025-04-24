#include <stdio.h>
#include <string.h>

int main(){

    char str[100000];
    scanf("%s",str);

    int i=0;
    int count=0;
    while (str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'){
            count++;
        }
        i++;
    }

    int len = strlen(str);

    printf("%d",len-count);
    
    return 0;
}