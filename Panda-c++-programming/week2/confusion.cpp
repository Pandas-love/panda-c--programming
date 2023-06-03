//when a function have same parameter name and same variable name
//at that time compiler get confused which one is variable and which one is parameter
//to clearify that confusion we need to use "this" keyword

#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age;
    string name;
    myclass(string,int);
};
myclass::myclass(string name,int age)
{
    this->name=name;
    this->age=age;
}
int main()
{
    myclass student("Tasnim Binte Kabir Maisha",19);
    cout<<student.name<<" "<<student.age<<endl;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// class myclass
// {
//     public:
//     int age;
//     string name;
//     void getdata(int,string);
// };
// void myclass::getdata(int age,string name)
// {
//     cout<<name<<" "<<age<<endl;
// }
// int main()
// {
//     myclass tomal;
//     cin>>tomal.age;
//     cin.ignore();
//     getline(cin,tomal.name);
//     tomal.getdata(tomal.age,tomal.name);
//     return 0;
// }