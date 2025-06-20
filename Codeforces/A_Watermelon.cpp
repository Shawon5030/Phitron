#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;cin>>a;

    int flag=0;
   
    for(int i=1;i<=sqrt(a);i++){
        if(i%2==0 && (a-i)%2==0 && i*(a/i)==a){
           
            flag=1;
            cout<<"YES";
            break;
        }
    }

    if(flag==0)cout<<"NO";

   
    return 0;
}