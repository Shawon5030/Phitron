#include <bits/stdc++.h>
using namespace std;

int main(){

    char a;
    cin >> a;
  
 
    if(a>=97 && a<=122){
        cout<<(char)(a-32);
    }
    else{
        
        cout<<(char)(a+32);
    }
    return 0;
}