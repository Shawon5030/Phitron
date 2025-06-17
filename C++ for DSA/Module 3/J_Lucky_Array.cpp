#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)cin>>arr[i];
   


    int min_val = 1e7;
    for(int i=0;i<n;i++){
         min_val = min(arr[i],min_val);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==min_val){
            count++;
        }
    }

    if(count%2==0){
        cout<<"Unlucky";
    }
    else cout<<"Lucky";
    
    

    return 0;
}