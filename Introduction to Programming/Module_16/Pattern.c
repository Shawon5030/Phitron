#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int space=n-1;
    int shas=1;
    
    for(int i=1;i<=n;i++){
        for(int j=space;j>0;j--){
            printf(" ");
        }
        

        for(int k=1;k<=shas;k++){
            if(i%2==1){
                 printf("#");
            }
            else{
                printf("-");
            }
           
            }
        printf("\n");
        
        
       
        space--;
        shas+=2;

        
        
    }

    int last;
        if(n%2==0){
            last=1;
        }
        else{
            last=0;
        }

        int space1=1;
        int shas1 =(n-1)*2-1;
        for(int i=1;i<n;i++){

            for(int m=1;m<=space1;m++){
                printf(" ");
            }
            if(last==1)
            {
             for(int j=1;j<=shas1;j++){
                if(i%2==1){
                    printf("#");
                }
                else{
                    printf("-");
                }
                
             }
        
            }

            else{
                for(int j=1;j<=shas1;j++){
                if(i%2==1){
                    printf("-");
                }
                else{
                    printf("#");
                }
                
             }
            }
            
            printf("\n");
            space1++;
            shas1-=2;
        }
       
    return 0;
}
