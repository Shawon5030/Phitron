#include <bits/stdc++.h>
using namespace std;

class Students{

    public:
    int roll;
    double gpa;
    int cls;

    Students(int roll,int cls,double gpa){
        this->roll= roll;
        this->cls = cls;
        this->gpa =gpa;
    }

};

int main(){


    Students first_variable(4,5,7.08);
   


    


    cout<<first_variable.gpa<<" "<< first_variable.roll<< " "<<first_variable.cls<<endl;
   
    return 0;
}