#include <stdio.h>

void myFun(int i){

    if(i==5)return;
   
    myFun(i+1);
    printf("%d\n",i);
}
int main(){


    myFun(1);
    return 0;
}