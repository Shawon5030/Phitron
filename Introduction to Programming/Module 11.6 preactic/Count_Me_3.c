#include <stdio.h>
#include <string.h>
int main(){

    int t;
    scanf("%d",&t);
    while (t--)
    {
    


    char arr[10002];
    scanf("%s",arr);

    int len =strlen(arr);
    int cap=0;
    int sm=0;
    int dig=0;



    for(int i=0;i<len;i++){
        if(arr[i]>=97 && arr[i]<=122)cap++;
        else if(arr[i]>=65 && arr[i]<=90)sm++;
        else{
            dig++;
        }
    }


    printf("%d %d %d\n",sm,cap,dig);
}
    return 0;
}