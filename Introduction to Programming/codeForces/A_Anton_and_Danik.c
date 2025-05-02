#include <stdio.h>
int main(){
 
    int n;
    scanf("%d",&n);
    char string[n];
    scanf("%s",string);
 
    int D=0;
    int A=0;
    for(int i=0;i<n;i++){
        if(string[i]=='D'){
            D++;
        }
        else{
            A++;
        }
    }
 
    
 
    if(A>D)printf("Anton");
    else if(A<D)printf("Danik");
    else{
        printf("Friendship");
    } 
    return 0;
}