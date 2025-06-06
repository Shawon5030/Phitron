#include <stdio.h>
int main(){

    int n,k;
    scanf("%d%d",&n,&k);

    long long int arr[n];
    for(int i=0;i<n;i++)scanf("%lld",&arr[i]);

    long long int sum=0;
    

   
        
        while (k--)
            {   long long int max=-1e17;
                int idx = 0;
                for(int i=0;i<n;i++){
                    if(arr[i]>max)
                    {
                        max=arr[i];
                        idx=i;
                    }
                }
                if(max>0){
                    sum+=(long long int)max;
                    arr[idx]=-1e17;
                }
            }
            
       
    

    printf("%lld",sum);
    
    return 0;
}