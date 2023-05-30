#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age;int number;char section;
    void getdata();
    void displaydata();
};
void myclass::getdata()
{
    cin>>age>>number>>section;
}
void myclass::displaydata()
{
    cout<<age<<" "<<number<<" "<<section<<endl;
}

int main()
{
    myclass &student=*(new myclass);
    student.getdata();
    student.displaydata();
    return 0;
}