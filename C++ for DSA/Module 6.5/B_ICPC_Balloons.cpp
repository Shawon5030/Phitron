#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int a;
        cin>>a;
        string num;
        cin>>num;

        int free[26]={0};
        for(int i=0;i<a;i++){
            int val = num[i]-65;
            free[val]++;
        }
        int sum =0;
       
        for(int i=0;i<26;i++){
            if(free[i]!=0){
                sum+=2;
                sum+=free[i]-1;
            }
        }

        cout<<sum<<endl;
        



    }
    
    return 0;
}