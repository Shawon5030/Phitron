#include <bits/stdc++.h>
using namespace std;

int main(){
    int *arr = new int [3];
    for(int i=0;i<3;i++)cin>>arr[i];
    
    int *new_arr= new int[5];
    for(int i=0;i<3;i++)new_arr[i]=arr[i];
    new_arr[3]=40;
    new_arr[4]=50;

    delete[] arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}