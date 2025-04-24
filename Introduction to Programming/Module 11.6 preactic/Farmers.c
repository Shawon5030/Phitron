#include <stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while (t--)
    {
       int m1,m2,d;
       scanf("%d%d%d",&m1,&m2,&d);

       int one_peo=m1*d;
       int new_day=one_peo/(m1+m2);
       int diff = abs(d-new_day);
       printf("%d\n",diff);
    }
    
    return 0;
}