#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    string name;
    int age;
    char section;
};

myclass fun()
{
    myclass student;
    // student.name="Tomal";
    // student.age=12;
    // student.section='G';
    
    getline(cin,student.name);
    //outside of class we cannot call an variable without an object.
    //as i created a object so i cannot use name directly i have to called variable through object.
    cin.ignore();//i should use cin.ignore after getline to avoid input buffering if we use this before getline then
    //first word of string will be ignored so BE CAREFUL.
    cin>>student.age>>student.section;
    return student;
}
int main()
{
    myclass rahim=fun();
    cout<<"Name: "<<rahim.name<<" "<<"Age: "<<rahim.age<<" "<<"Section: "<<rahim.section<<endl;
    return 0;
}