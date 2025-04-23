#include <stdio.h>
int main(){

    char a[100],b[100];
    scanf("%s%s",&a,&b);

    int i=0;
    while (1)
    {
        if(a[i]=='\0' && a[i]=='\0'){
            printf("Equal");
            break;
        }
        else if(a[i]=='\0')
        {
        printf("A small");
        break;
        }
        else if(b[i]=='\0')
        {
            printf("B small");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("b is small");
            break;

        }
        else if(a[i]<b[i])
        {
            printf("a is small");
            break;
        }
        else if(a[i]==b[i])i++;
        
    }
    
    return 0;
}