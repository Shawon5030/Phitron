#include <stdio.h>
#include <string.h>
int main(){

    char arr[100];
    scanf("%s",arr);
    int newarr[26]={0};

    
    for(int i=0;i<strlen(arr);i++){
        int a = arr[i]-97;
        newarr[a]++;
    }

    for(int i=0;i<26;i++){
        if(newarr[i]==2){
            printf("%c",i+97);
        }
    }

}