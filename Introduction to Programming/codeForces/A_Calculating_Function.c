#include <stdio.h>
#include <string.h>
int main(){

    long long int n;
    scanf("%lld",&n);

    
    
    if(n%2==0){
        printf("%lld",n/2);
    }
    else{
        printf("%lld",-((n/2)+1));
    }
  
    // return 0;
}