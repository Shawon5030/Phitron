#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
  
    while (n--)
    {
        long long int re;
        long long int b,c,d;
        scanf("%lld%lld%lld%lld",&re,&b,&c,&d);


        long long int new_re = b*c*d;
        if(re%new_re==0){
            printf("%lld\n",re/new_re);
        }
        else{
            printf("-1\n");
        }

    }
    
    return 0;
}