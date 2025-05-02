#include <stdio.h>
int main(){

    char a[101];
    char b[101];
    scanf("%s%s",a,b);

    int count =0;
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<strlen(a);j++){
            if(a[i]==b[j]){
               count++;
            }
        }
    }

   if(strlen(a)==count){
    printf("Yes");
   }
   else{
    printf("No");
   }
    return 0;
}