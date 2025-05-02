#include <stdio.h>
#include <string.h>
int main(){
 
    char arr[100];
    scanf("%s",arr);
    int i=0;
    int count=0;
 
    
    
    while (arr[i]!='\0')
    {
        int val = arr[i]-'0';
        if(val==4 || val==7){
            count++;
            
            
        }
        i++;
    }
 
    
if(count==4 || count==7)printf("YES");
else{
    printf("NO");
}
     
}