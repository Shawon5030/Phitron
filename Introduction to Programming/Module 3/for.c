#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    while (N--)
    {
        int data;
        unsigned int fac=1;
        scanf("%d",&data);
        for(int i=1;data>i;i++)fac*=i;
        printf("%lld\n",fac);
        
    }
    
}
