#include <stdio.h>
#include <string.h>
int main(){

    char s[102];
    scanf("%s",s);
    
    int count=0;
    int arr[101]={0};
    for(int i=0;i<strlen(s);i++){
        
        if(s[i]!='+'){
            arr[count]=s[i]-'0';
            count++;
        }
    }
    

    for(int i=0;i<strlen(s)/2;i++){
        for(int j=0;j<strlen(s)/2-i;j++){
            if(arr[j]>arr[j+1]){
                int tem =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
            
        }
    }
    

     for(int i=0;i<strlen(s)/2;i++){
        printf("%d+",arr[i]);
     }

    printf("%d",arr[strlen(s)/2]);
    
    
    return 0;
}