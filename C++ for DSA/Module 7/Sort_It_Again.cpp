#include <bits/stdc++.h>
using namespace std;

class Students{

    public:
        string name;
        int clss;
        char sec;
        int id;
        int math_marks;
        int eng_marks;


};


bool cmp(Students l,Students r){
    if(l.eng_marks>r.eng_marks){
        return true;
    }
    else if (l.eng_marks==r.eng_marks && l.math_marks>r.math_marks){
       return true;
    }
    else if (l.eng_marks==r.eng_marks && l.math_marks==r.math_marks){
       if(l.id<r.id)return true;
       else return false;
    }
    else{
        return false;
    }
}

int main(){

    int n;
    cin>>n;

    Students a[n];

    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].clss>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].clss<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}