#include <stdio.h>
#include <string.h>
int main(){

    char arr[10002];
    scanf("%s",arr);
    int len = strlen(arr);

    int new_a[26]={0};

    for(int i=0;i<len;i++){
        int val = arr[i] -97;
        new_a[val]++;
    }
    
    for(int i=0;i<26;i++){
        if(new_a[i]!=0){
            printf("%c - %d\n",97+i,new_a[i]);
        }
    }
    return 0;
}