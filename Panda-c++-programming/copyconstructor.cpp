#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int number;
    char section;
    float height;
    int payment;
    student();
    void getinfo(student &copy)
    {
        // copy.height=1.68;
        // copy.number=1920476165;
        // copy.section='a';
        // copy.payment=5560;
        copy.height=height;
        copy.number=number;
        copy.section=section;
        copy.payment=payment;
    }
    void displayinfo(student &copy)
    {
        cout<<"Body Height: "<<copy.height<<endl;
        cout<<"Number: "<<copy.number<<endl;
        cout<<"Section: "<<copy.section<<endl;
        cout<<"Payment: "<<copy.payment<<endl;
    }
};
student::student()
{
    cin>>number>>section>>height>>payment;
}
int main()
{
    student tomal;student maisha;
    tomal.getinfo(maisha);
    tomal.displayinfo(maisha);
    maisha.displayinfo(tomal);
    return 0;
}