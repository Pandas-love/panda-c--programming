#include<bits/stdc++.h>
using namespace std;

void reverse(stringstream &tom)
{
    string mai;
    while(tom>>mai)
    {
        reverse(tom);
        cout<<mai<<" ";
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream tom;
    tom<<s;
    reverse(tom);
    return 0;
}