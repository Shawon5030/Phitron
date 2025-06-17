#include <bits/stdc++.h>
using namespace std;


class Students{
    public:
        string name;
        int roll ;
        char sec;
        int marks;

};



int main(){

    int n;
    cin>>n;

    Students a[n];

   for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].sec>>a[i].marks;
   }

   
   for(int i=0,j=n-1;i<j;i++,j--){
        swap(a[i].sec,a[j].sec);
   }
   for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" " <<a[i].sec<<" "<<a[i].marks<<endl;
   }
    
    
    
    
    return 0;
}