#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
       int n;
       cin>>n;

        int arr[n];
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

       if(n%2==1){
        cout<<"-1\n";
       }
       else{

        
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        cout<<abs(n/2-max(even, odd))<<"\n";

       }
    }
    
    return 0;
}