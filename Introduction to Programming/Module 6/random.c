#include <stdio.h>
int main(){

    int a=5;
    int c=3;
    int m=9;
    int seed;
    scanf("%d",&seed);
    int random = (a*seed+c)%m;
    printf("%d",random);
    return 0;
}