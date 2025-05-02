#include <stdio.h>
#include <string.h>
int main(){
 
    char arr[103];
    scanf("%s",arr);
    int uc=0,lc=0;
 
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]>=97 && arr[i]<=122){
            lc++;
        }
        else{
            uc++;
        }
    }
 
 
    if(lc>=uc){
 
        for(int i=0;i<strlen(arr);i++){
            if(arr[i]>=65 && arr[i]<=90){
                arr[i]=arr[i]+32;
            }
        }
    }
    else{
 
        for(int i=0;i<strlen(arr);i++){
            if(arr[i]>=97 && arr[i]<=122){
                arr[i]=arr[i]-32;
            }
        }
    }
 
    printf("%s",arr);
    return 0;
}