#include <bits/stdc++.h>
using namespace std;

int main(){



    int t;cin>>t;
    while (t--) 
    {
       long long int st,en;
       cin>>st>>en; 

        long long int end = max(en,st);
        long long int start = min(st,en);
       
        
       long long int sum = ((long long int)(end)*(long long int)(end+1))/2;
       long long int rem=0;
       if(start!=1){
            start--;
             rem = ((long long int)(start)*(long long int)(start+1))/2;
       }

       long long int output = sum-rem;
      
       cout<<output<<endl;
       

    
    
    
 }
}