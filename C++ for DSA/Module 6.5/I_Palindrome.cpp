#include <bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin>>a;
    string b=a;
    reverse(b.begin(),b.end());
    if(a==b)cout<<"YES";
    else{
        cout<<"NO";
    }
    return 0;
}