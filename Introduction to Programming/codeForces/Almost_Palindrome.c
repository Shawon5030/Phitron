#include <stdio.h>
#include <string.h>
int main(){

    int t=3;
    scanf("%d",&t);

    while (t--)
    {
        char arr[1002];
        int free[26]={0};
        scanf("%s",arr);
        int len = strlen(arr);

        for(int i=0;i<len;i++){
            int val = arr[i]-97;
            free[val]++;
        }
        
        int count=0;
        for(int i=0;i<26;i++){
            if(free[i]==1)count++;
        }
        
        int mid=0;
        if(len%2==1){
            for(int i=0;i<len;i++){
                if(arr[len/2] == arr[i]){
                    mid++;
                }
            }
            if(mid==2)printf("%d\n",count);
        }
        else{

        
            if(count==0)printf("0\n");
            else{
            
            
                    printf("%d\n",count-1);
            
                
            }
        }
        
        
        }
    
    return 0;
}