#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);cin.ignore();
    //instead of using string::iterator we can use auto.
    for (string::iterator tom= s.begin(); tom < s.end(); tom++)
    {
        cout<<*tom<<" ";
    }
    cout<<endl;
    cout<<*s.begin()<<endl;
    cout<<*s.end()<<endl;
    cout<<*(s.end()-1)<<endl;
    return 0;
}