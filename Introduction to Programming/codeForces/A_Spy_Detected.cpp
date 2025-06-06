#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int a;
        cin>>a;
        int arr[a];
        int arr1[a];
        for(int i=0;i<a;i++)cin>>arr[i];
        for(int i=0;i<a;i++)arr1[i]=arr[i];
        
        sort(arr,arr+a);
        
        
        
        int val = 0;
        if(arr[0]==arr[1]){
            val = arr[a-1];
        }
        else{
            val = arr[0];
        }

        for(int i=0;i<a;i++){
            if(arr1[i]==val){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    
    return 0;
}