#include <stdio.h>
int main(){

    int T;
    scanf("%d",&T);

    while (T--)
    {
        int num;
        int count=1;
        scanf("%d",&num);
        while (count)
        {
            printf("%d ",num%10);
            num = num/10;
            if(num==0)count=0;
            
        }
        printf("\n");
        
    }
    
    return 0;
}