#include <stdio.h>
int main(){

    char S[100001];
    scanf("%s",&S);



    int i=0;
    while (S[i]!='\0')
    {
        if(S[i]>=97 && S[i]<=122)S[i]=S[i]-32;
        else if(S[i]>=65 && S[i]<=90)S[i]=S[i]+32;
        else if(S[i]==44)S[i]=32;
        i++;
    }
    
  
    int j=0;
    while (S[j]!='\0')
    {
       printf("%c",S[j]);
        j++;

    }
    
    
    return 0;
}