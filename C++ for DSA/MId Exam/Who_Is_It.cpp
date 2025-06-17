#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[106];
    char section;
    int mark;
};

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        Student s1;
        cin >> s1.id >> s1.name >> s1.section >> s1.mark;
        Student s2;
        cin >> s2.id >> s2.name >> s2.section >> s2.mark;
        Student s3;
        cin >> s3.id >> s3.name >> s3.section >> s3.mark;

        if (s1.mark >= s2.mark && s1.mark >= s3.mark)
        {
           
            if (s1.mark > s2.mark && s1.mark > s3.mark)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else if (s1.mark == s2.mark && s1.id < s2.id && s1.mark == s3.mark && s1.id < s3.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else if (s1.mark == s2.mark)
            {   if(s1.id<s2.id)
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else if (s1.mark == s3.mark && s1.id < s3.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
        }
    
    else if (s2.mark >= s1.mark && s2.mark >= s3.mark )
    {

        if (s2.mark > s1.mark && s2.mark > s3.mark)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
        else if (s2.mark == s1.mark && s2.id < s1.id && s2.mark == s3.mark && s2.id < s3.id)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
        else if (s2.mark == s1.mark && s2.id < s3.id)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
        else if (s2.mark == s3.mark && s2.id < s3.id)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
    }
    else if (s3.mark >= s1.mark && s3.mark >= s2.mark )
    {

        if (s3.mark > s1.mark && s3.mark > s2.mark)
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
        }
        else if (s3.mark == s1.mark && s3.id < s1.id && s3.mark == s2.mark && s3.id < s2.id)
        {
           cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
        }
        else if (s3.mark == s1.mark && s3.id < s3.id)
        {
           cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
        }
        else if (s3.mark == s2.mark && s3.id < s2.id)
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
        }
    }
    
}

}