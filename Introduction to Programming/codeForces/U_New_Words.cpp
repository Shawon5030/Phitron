#include <bits/stdc++.h>
using namespace std;

int main(){

    string name;
    cin>>name;
    for(int i=0;i<name.size();i++){
        if(name[i]>66 && name[i]<=90){
            name[i]=name[i]+32;
        }
    }

    int free[26]={0};

    for(int i=0;i<name.size();i++){
        int val = name[i]-97;
        free[val]++;
        
    }
     int e = free[4];
     int g = free[6];
     int y = free[24];
     int p = free[15];
     int t = free[19];

    int min_val = min({e,g,y,p,t});
    cout<<min_val;
    
    return 0;
    
   
}