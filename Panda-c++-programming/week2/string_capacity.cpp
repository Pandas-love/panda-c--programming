#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    //s.clear();
    if(s.empty()==1)
    {
        cout<<"Empty"<<endl;//if the string is empty then function will return 1 as true statement.
    }
    else
    {
        cout<<"Not Empty"<<endl;//if the string is non empty the function will return 0 as false statement.
    }
    s.resize(26);
    cout<<s<<endl;
    s.resize(28,'x');//here 26 index null because previously i declare 26 index and doesn't put any character
    // so it became null in next resizing also.
    cout<<s<<endl;
    return 0;
}