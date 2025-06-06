#include <stdio.h>
#include <math.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main(){

    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
    int first = b*c;
    int second = first/g;
    int t = d*e;
    int four = f/h;
    int result = MIN(second,t);
    int final = MIN(result,four);
    printf("%d",final/a); 
    return 0;
}