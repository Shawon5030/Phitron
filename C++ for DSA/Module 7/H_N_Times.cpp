#include <bits/stdc++.h>
using namespace std;

void char_print(int n,char a){

    cout<<a;
    for(int i=0;i<n-1;i++){
        cout<<" "<<a;
    }
}

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        char a;
        cin>>n>>a;
        char_print(n,a);
        cout<<endl;
    }
    
    return 0;
}