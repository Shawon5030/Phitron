#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);

    int flag=0;
   while (ss>>word)
   {
        if(word=="Jessica"){
            flag=1;
            break;
        }
    }
   
   if(flag==1)cout<<"YES";
   else{
    cout<<"NO";
   }
    return 0;
}