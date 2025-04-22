#include <stdio.h>
#include <string.h>
int main(){

    char arr1[1002];
    char arr2[1002];

    scanf("%s",arr1);
    int i=0;
    int j=strlen(arr1)-1;
    while (arr1[i]!='\0')
    {
        arr2[i]=arr1[j];
        i++;
        j--;
    }
    int count=0;
    for(int i=0;arr1[i]!='\0';i++){
        if(arr1[i]!=arr2[i]){
            count=1;
        }
    }
    if(count==0){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
}