#include <stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while (t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        long long int sum= (long long int)a+(long long int)b+c;
        int target=sum/3;
        if(sum%3==0){
            if(target>=a && target>=b && (target-a)+(target-b)<=c-target ){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}