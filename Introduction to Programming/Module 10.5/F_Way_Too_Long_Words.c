#include <stdio.h>
#include <string.h>
int main(){

    int t;
    scanf("%d",&t);

    
    while (t--)
    {
        char arr[101];
        scanf("%s",arr);
        int len = strlen(arr);
        if(len>10)printf("%c%d%c\n",arr[0],len-2,arr[len-1]);
        else{
            printf("%s\n",arr);
        }

    }
    
    return 0;
}