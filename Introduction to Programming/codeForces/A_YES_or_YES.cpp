#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
            }
            
        }
      

        
        if(a[0]=='y' && a[1]=='e' && a[2]=='s')cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}