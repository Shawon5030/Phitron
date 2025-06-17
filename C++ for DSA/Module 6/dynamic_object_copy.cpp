#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string name;
    int jercy_nam ;

    Cricketer(string name,int jercy_nam){
        this->jercy_nam=jercy_nam;
        (*this).name = name;
    }

};

int main(){

    Cricketer* dhoni = new Cricketer("dhoni",89);
    Cricketer* kholi = new Cricketer("kholi",10);
    

    (*dhoni)=(*kholi);
    delete kholi;
   cout<<dhoni->name<<endl;

    
    return 0;
}