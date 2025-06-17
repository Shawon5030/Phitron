#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<min({a,b,100,20,1})<<'\n'<<max(a,b);
    swap(a,b);
    cout<<"after swap a:"<<a<<" "<<b;;
}