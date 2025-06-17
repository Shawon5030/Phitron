#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int last = t;
    while (t--)
    {
       string s;
       cin>>s;
       int sum_f=s[0]-'0'+s[1]-'0'+s[2]-'0';
       int sum_s=s[3]-'0'+s[4]-'0'+s[5]-'0';
       if(last==t){
        if(sum_f==sum_s)
         cout<<"YES";
        else
        cout<<"NO";
       }
       else{

       
       if(sum_f==sum_s)
         cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }

    }
    
    return 0;
}