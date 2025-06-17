#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
       string a;
       string b;

       cin>>a>>b;

    for(int i=0,j=0;i<a.size();i++){
        if(a[i]==b[j]){
            int flag=0;
            for(int k=0;k<b.size();k++){
                if(a[i+k]!=b[k]){
                    flag=1;
                }
            }
            if(flag==0){
                a.erase(i,b.size()-1);
                a[i]='#';
            }
        }
        
    }
      
      cout<<a<<endl;
    }

    
}