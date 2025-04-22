#include <stdio.h>
#include <string.h>
int main(){

    char arr1[10001];
    scanf("%s",arr1);
    char arr2[10001];
    scanf("%s",arr2);
   

    int first_arr_len = strlen(arr1);
    int sec_arr_len = strlen(arr2);
    printf("%d %d\n",first_arr_len,sec_arr_len);
    printf("%s%s\n",arr1,arr2);

    int i=0;
    char tem = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = tem;
    printf("%s %s",arr1,arr2);
    return 0;
}