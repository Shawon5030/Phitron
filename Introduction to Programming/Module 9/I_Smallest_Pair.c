#include <stdio.h>
#include <limits.h>
int main(){

    int n;
    scanf("%d",&n);
    while (n--)
    {
       int T;
       scanf("%d",&T);
       int arr[T];
       long long int min=LLONG_MAX;
       
       for(int i=0;i<T;i++)scanf("%d",&arr[i]);

       for(int i=1;i<=T;i++){
        for(int j=i+1;j<=T;j++){
            long long int value=(( long long int)arr[i-1]-i)+(arr[j-1]+j);
            
            if(value<min)min=value;

        }
       }
       printf("%lld\n",min);
    }
    
    return 0;
}