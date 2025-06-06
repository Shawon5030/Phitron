#include <stdio.h>
#include <string.h>
int main(){

    char arr[1001];
    fgets(arr, sizeof(arr), stdin);
    
    char new_arr[1001];
    int fre_q[26]={0};
    int count=0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='{' || arr[i]=='}' || arr[i]==' ' || arr[i]==','){

        }
        else{
            
            new_arr[count]=arr[i];
            
            int val = arr[i]-97;
            fre_q[val]++;
            count++;

        }
    }


    

    int U_val=0;
    for(int i=0;i<26;i++){
        if(fre_q[i]!=0)U_val++;
        
    }

    printf("%d",U_val);

   
    
    return 0;
}