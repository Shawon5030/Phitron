#include <stdio.h>
void One_2_n(int n){

    if(n==0)return;
    
    One_2_n(n-1);
    printf("%d\n",n);

}
int main(){

    int n;
    scanf("%d",&n);
    One_2_n(n);
    return 0;
}