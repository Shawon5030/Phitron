#include <stdio.h>
int main(){

    int num;
    scanf("%d",&num);
    int last_dig = num%10;
    int first_dig=num/10;
    if(last_dig%first_dig==0 || first_dig%last_dig==0)printf("YES");
    else{
        printf("NO");
    }
    return 0;
    
}