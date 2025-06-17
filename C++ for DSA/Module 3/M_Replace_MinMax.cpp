#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int max_e =-1e6;
    int min_e = 1e7;
    int idx_m=0;
    int idx_=0;
    for(int i=0;i<n;i++){
        max_e = max(arr[i],max_e);
        if(arr[i]==max_e)idx_m=i;
        min_e = min(arr[i],min_e);
        if(arr[i]==min_e)idx_=i;
    }

    swap(arr[idx_],arr[idx_m]);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
    return 0;
}