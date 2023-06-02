#include<bits/stdc++.h>
using namespace std;
class stduent
{
    public:
    string name;
    int roll;
    int clas;
    char section;
    long long int phone_number;
};
int main()
{
    stduent tomal;
    tomal.name="TOMAL MUJUMDER";
    //strcpy(tomal.name,nm); cant use this because strcpy is a build in function which works like C language.
    //as string keyword is not an array thats why we cant use strcpy. if we used char name[100] then use strcpy, that time its going to work out.
    tomal.roll=10;
    tomal.clas=12;
    tomal.section='D';
    tomal.phone_number=1913011966;//when we give zero at the first of a number compiler count that as an octal number but octal(0-7) has 8 number and 9 digits not belong to it.
    cout<<"student name: "<<tomal.name<<endl;
    cout<<"student roll: "<<tomal.roll<<endl;
    cout<<"student section: "<<tomal.section<<endl;
    cout<<"student clas: "<<tomal.clas<<endl;
    cout<<"student phone_number: 0"<<tomal.phone_number<<endl;
    return 0;
}