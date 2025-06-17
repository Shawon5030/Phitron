#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }
    else{

        int space=n-1;
        int number_limit=1;
        for(int i=1;i<=n;i++){
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            
            for (int j = number_limit; j>0; j--)
            {
                printf("%d",j);
            }
            printf("\n");
            number_limit++;
            space--;

            

        }
    }
    return 0;
}