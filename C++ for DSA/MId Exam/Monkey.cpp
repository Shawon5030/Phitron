#include <bits/stdc++.h>
using namespace std;

int main()
{

    char a[100002];
    while (cin.getline(a, 100002))
    {
        int count = 0;
    
     
        sort(a,a+strlen(a),greater<int>());
        for(int i=0;i<strlen(a);i++){
            if(a[i]==32){
                count=i;
                break;
            }
        }
        if(count!=0){
            sort(a,a+count);
        }
        else{
             sort(a,a+strlen(a));
        }
        

       
        cout<<a<<endl;
    }
}
