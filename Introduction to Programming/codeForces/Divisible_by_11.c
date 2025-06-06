#include <stdio.h>
#include <string.h>
int main(){

    char arr[1000];
    scanf("%s",arr);

    int len = strlen(arr);
    int even_sum =0;
    int odd_sum =0;

    for(int i=0;i<len;i++){
        if(i%2==0){
            int val = arr[i]-'0';
            odd_sum+=val;
        }
        else{
            int val = arr[i]-'0';
            even_sum+=val;
        }
    }

    int abs_sum = abs(even_sum-odd_sum);
    if(abs_sum%11==0)printf("YES");
    else{
        printf("NO");
    }
    return 0;
}