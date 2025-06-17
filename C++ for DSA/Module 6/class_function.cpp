#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    
    string name;
    int roll;
    char sec;

    Student(string name,int roll,char sec ){
        this->roll=roll;
        (*this).name = name;
        this->sec = sec;
    }

    void You_name(){
        cout<<name<<endl;
    }
};

int main(){
    int a;
    Student shawon("mahmudul",8,'A');
    shawon.You_name();
    Student shaon("shaon",1,'A');
    shaon.You_name();
    
    return 0;
}