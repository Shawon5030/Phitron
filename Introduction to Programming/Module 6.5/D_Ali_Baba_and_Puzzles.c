#include <stdio.h>
int main(){

    long long int a,b,c;
    long long int d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    
    
    long long int a2 = a+b*c;
    long long int a3 = a+b-c;

    long long int a5 = a+b-c;
    long long int a6 = a+b*c;
  

    long long int a8 = a-b+c;
    long long int a9 = a-b*c;
  
    long long int a11= a*b-c;
    long long int a12= a*b+c;

    if( d==a2 ||d==a3||d==a5||d==a6|| d==a8 ||d==a9||d==a11||d==a11||d==a12){
        printf("YES");
    }
    else{
       printf("NO");
    }
    
}