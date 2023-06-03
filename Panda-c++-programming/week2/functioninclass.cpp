#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int marks1;
    int marks2;
    int total();  
};
int myclass::total()
{
    cin>>marks1>>marks2;
    int mot=marks1+marks2;
    return mot;
}
int main()
{
    myclass tomal;
    cout<<tomal.total()<<endl;
    return 0;
}