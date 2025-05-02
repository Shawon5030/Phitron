#include <stdio.h>
int main(){
 
    int n,h;
    scanf("%d %d",&n,&h);
    int arr[20000];
    
    int i=0;
    int sum=0;
    while (n--)
    {   
        scanf("%d",&arr[i]);
        if(arr[i]>h){
            sum+=2;
        }
        else{
            sum++;
        }
        i++;
       
    }
 
    printf("%d",sum);
    
    return 0;
}