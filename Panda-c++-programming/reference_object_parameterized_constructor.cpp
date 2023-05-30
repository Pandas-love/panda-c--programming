#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age; string name; int roll;
    myclass(int ,int ,string); void displaydata();

};

myclass::myclass(int a,int r, string n)
{
    cin>>age;
    cin>>roll;
    cin.ignore();
    getline(cin,name);
}
void myclass::displaydata()
{
    cout<<age<<endl;
    cout<<roll<<endl;
    cout<<name;
}
int main()
{
    myclass &student=*(new myclass(10,40,"TOmal"));
    student.displaydata();    
    return 0;
}
