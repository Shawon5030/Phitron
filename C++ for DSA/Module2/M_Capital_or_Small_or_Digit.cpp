#include <bits/stdc++.h>
using namespace std;

int main(){
    
    char a;
    cin>>a;
    int val = (int)a;
    if(val>=65 && val<=90)cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if(val>=97 && val<=122)cout<<"ALPHA"<<endl<<"IS SMALL";
    else cout<<"IS DIGIT";
    
    return 0;
}