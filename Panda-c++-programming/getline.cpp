#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int bmi;
    void getdata()
    {
        getline(cin,name);
        cin>>age;
        cin>>bmi;
        cin.ignore();//its help to stop getline taking invaild input
        //i put it in the last because if it is in the first it will ignore first word of the string.
        //If i put it in the last then after taking input it will ignore others invaild inputs and become stop.
    }
    void displaydata();
};
void student::displaydata()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<bmi<<endl;
}
int main()
{
    student tomal;
    student maisha;
    tomal.getdata();maisha.getdata();
    tomal.displaydata();maisha.displaydata();
    return 0;
}