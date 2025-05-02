#include <stdio.h>
int main(){
 
    int n;
    scanf("%d",&n);
 
    int sum=0;
    int max=0;
    while (n--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
 
        sum-=a;
        sum+=b;
        if(sum>max)max=sum;
        
    }
    
    printf("%d",max);
    return 0;
}
