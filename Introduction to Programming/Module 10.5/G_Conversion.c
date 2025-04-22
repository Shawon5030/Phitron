#include <stdio.h>
#include <string.h>
int main(){

    char arr[100001];
    scanf("%s",arr);
 

    int i=0;
    while (arr[i]!='\0')
    {
        if(arr[i]>96 && arr[i]<123){
            arr[i]-=32;
        }
        else if(arr[i]>64 && arr[i]<91){
            arr[i]+=32;
        }
        else{
            arr[i]=' ';
        }
        i++;
    }
    int j=0;
    while (arr[j]!='\0')
    {
        printf("%c",arr[j]);
        j++;
    }
    // for(int i=0;i<strlen(arr);i++){
    //     printf("%c",arr[i]);
    // }
    
    // return 0;
}