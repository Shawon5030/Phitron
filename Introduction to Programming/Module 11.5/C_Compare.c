#include <stdio.h>
int main(){

    char a[100],b[200];
    scanf("%s %s",a,b);    

    int i=0;
    while (1)
    {   
        if(a[i]=='\0' && b[i]=='\0'){
            printf("%s",a);
            break;
        }
        else if(a[i]=='\0'){
             printf("%s",a);
             break;
        }
        else if(b[i]=='\0'){
             printf("%s",b);
             break;
        }

        else if(a[i]==b[i]){
            i++;
        }
        else if(a[i]>b[i]){
            printf("%s",b);
            break;
        }
        else if(a[i]<b[i]){
            printf("%s",a);
            break;

        }

    }
    
    
    return 0;
}