#include <iostream>

using namespace std;
int main(){
    int x;
    cin>>x;
    cin.ignore();
    cout<<x<<endl;
    char a[100];
    cin.getline(a,100);
    cout<<a;
    string s;
    cin>>s;
    cout<<endl<<s;
}