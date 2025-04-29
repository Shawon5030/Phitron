#include <stdio.h>
int main(){

    int a;
    scanf("%d",&a);
    int cou = 0;
    for(int i=1,j=a-1;i<a;i++,j--){
        if(i+j==a && i%2==0 && j%2==0){
            printf("YES");
            cou=1;
            break;
        }
        
        

    }

    if(cou==0)printf("NO");
    return 0;
}