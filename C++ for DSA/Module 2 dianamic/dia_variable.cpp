#include <bits/stdc++.h>
using namespace std;

int* p;
void fun(){
    int a=10;
    p = &a;
    cout<<*p<<endl;
}

int main(){
    fun();
    cout<<*p<<endl;
}