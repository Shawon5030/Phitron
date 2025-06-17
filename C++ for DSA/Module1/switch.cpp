#include <iostream>
using namespace std;

int main(){
    
    int x;
    cin>>x;

    switch (x%2==0)
    {
        case 1:
            cout<<"Even";
            break;
        case 0:
            cout<<"Odd";
            break;
    }

    
}