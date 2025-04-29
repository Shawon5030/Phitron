#include <stdio.h>
int main(){

    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    int val = n/a;
    int val1 = m/a;
    if(n%a!=0){
        val++;
    }
    if(m%a!=0){
        val1++;
    }
    printf("%lld",(long long int)val*val1);
    
    return 0;
}