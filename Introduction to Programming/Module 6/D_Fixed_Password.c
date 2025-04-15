#include <stdio.h>
int main(){
    int count=1;
    int write_pass=1999;

     while (count)
     {
        int pass;
        scanf("%d",&pass);
        if(pass==write_pass){
            printf("Correct");
            count=0;
        }
        else{
            printf("Wrong\n");
        }
     }
     
    return 0;
}