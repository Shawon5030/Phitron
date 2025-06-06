#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){

    char arr[1005];
    scanf("%s",arr);
    int i=0;
    int flag = 1;
    while (arr[i]!='\0')
    {
        int val = arr[i]-'0';
        
        if(val!=4){
            

            if(val!=7){
                flag=0;
                break;
            }
            
        }
        i++;
    }

    if(flag==1)printf("YES");
    else{

        int i=0;
        int len = strlen(arr)-1;

        int val =0;
        while (arr[i]!='\0'){
            int v = arr[i]-'0';

            int mul = pow(10,len);
            int final_val = mul*v;
           
           val+=final_val;
           
            len--;
            i++;
        }
        if(val%4==0 && val%7==0)printf("YES");
        else if(val%4==0)printf("YES");
        else if(val%7==0)printf("YES");
        else printf("NO");
    }

        

    
    return 0;
}