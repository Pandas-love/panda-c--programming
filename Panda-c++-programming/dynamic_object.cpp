#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age;
    int number;
    char section;
    myclass(int,int,char);
    void display();
};
myclass::myclass(int a,int n,char s)
{
    age=a;
    number=n;
    section=s;
}
void myclass::display()
{
    cout<<age<<endl;
    cout<<"0"<<number<<endl;
    cout<<section<<endl;
}
int main()
{
    myclass *st=new myclass(10,1920476165,'D');
    st->display();
    return 0;
}