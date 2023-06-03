#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age;
    string name;
    void getdata(string name,int age);
};
void myclass::getdata(string name,int age)
{
    this->name=name;
    this->age=age;
    cout<<this->name<<" "<<this->age<<endl;
}
int main()
{
    myclass *maisha= new myclass;
    maisha->getdata("Maisha",19);
    myclass *tomal=new myclass;
    *tomal=*maisha; //if this was static memory then i will declare tomal=maisha
    cout<<tomal->age<<" "<<tomal->name<<endl;
    return 0;
}