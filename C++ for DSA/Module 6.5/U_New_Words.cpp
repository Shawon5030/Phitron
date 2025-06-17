#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
    }


   sort(s.begin(),s.end());
   int free[26]={0};
    for(int i=0;i<s.size();i++){
        int val = s[i]-97;
        free[val]++;
    }

    int count[5];
    int k=0;

    for(int i=0;i<26;i++){
        if(free[i]!=0){
            char a = (i+97);
            if(a=='g' || a=='e' || a=='y' ||a =='p'||a=='t')
            {   
                if(free[i]!=0){
                    count[k]=free[i];
                    k++;
                }
            }
             
        }
       
    }
    int min_=100000;
    for(int i=0;i<5;i++){
        min_ = min(min_,count[i]);
    }

    cout<<min_;
    return 0;
}
