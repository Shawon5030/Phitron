#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int max =0;
    int mid=0;
    int min=0;

    if(a>=b && a>=c){
        max=a;
        if(b>c){
            mid=b;
            min=c;
        }
        else{
            mid=c;
            min=b;
        }
    }
    else if(b>=a && b>=c){
        max=b;
        if(a>c){
            mid=a;
            min=c;
        }
        else{
            mid=c;
            min=a;
        }
    }
    else if(c>=a && c>=b){
        
        max=c;

        if(b>=a){
            mid=b;
            min=a;
            
            
        }
        else{
            mid=a;
            min=b;
            
        }
    }
    
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n\n",max);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);


    return 0;
}