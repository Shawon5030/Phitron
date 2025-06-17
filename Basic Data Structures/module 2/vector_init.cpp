#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1(10,4);
    int a[4]={1,2,3,4};
    vector<int> v(a,a+4);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    cout<<v.size();
    return 0;
}