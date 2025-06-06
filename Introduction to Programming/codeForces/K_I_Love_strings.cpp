#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        string a,b;
        cin>>a>>b;
        
        int len = a.size();
        int len1 = b.size();

        int m = min(len,len1);
        string ne_string ="";
        for(int i=0;i<m;i++){
            ne_string+=a[i];
            ne_string+=b[i];
        }
        
        if(len>len1){
            ne_string+=a.substr(m,len);
        }
        else if(len1>len){
            ne_string+=b.substr(m,len1);
        }
        cout<<ne_string<<endl;
        
        
    }

    
    return 0;
}