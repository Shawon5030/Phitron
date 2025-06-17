#include <bits/stdc++.h>
using namespace std;

class Stuedent{
    public:
        string name;
        int roll;
        int marks;
    

};

bool cmp(Stuedent l,Stuedent r){
    if(l.marks < r.marks){
        return false;
    }
    else{
        return true;
    } 
}



int main(){
    int n;
    cin>>n;
    Stuedent a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    
    sort(a,a+n,cmp);

    for(int i=0;i<n;i++){
        cout<<a[i].name<<"  "<<a[i].roll<<" "<<a[i].marks<<endl;
        
    }

   
    
    return 0;
}