#include <stdio.h>
#include <string.h>
int main(){

    int n;
    scanf("%d",&n);
    while (n--)
    {
        char a[100];
        char b[100];
        scanf("%s%s",a,b); 

        int len = strlen(a);
        int len1 = strlen(b);

        int diff = abs(len-len1);
        

        int max=0;
        if(len>len1)max=len;
        else{
            max=len1;
        }




        for( int i=0;i<len && i<len1;i++ ){
            printf("%c%c",a[i],b[i]);

        }

        if(len>len1){
            for(int i=len1;i<len;i++){
                printf("%c",a[i]);
            }
        }
        else{
            for(int i=len;i<len1;i++){
                printf("%c",b[i]);
            }
        }
        printf("\n");
    }
    

    return 0;
}