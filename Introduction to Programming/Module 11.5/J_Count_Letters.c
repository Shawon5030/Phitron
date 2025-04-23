#include <stdio.h>
#include <string.h>
int main(){

    char a[10000002];
    scanf("%s",a);
   
  

    
    int len = strlen(a);

    int b[27]={0};

    for(int i=0;i<len;i++){
        int z=a[i]-96;
      
        
        b[z]++;
        
    }
    

    for(int i=1;i<27;i++){
        if(b[i]>0){
        
            printf("%c : %d\n",96+i,b[i]);
        }
    }
}
        
    
   
