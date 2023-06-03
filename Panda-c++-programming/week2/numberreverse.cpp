#include<bits/stdc++.h>
using namespace std;

void panda(stringstream &mai)
{
    string word;
    while (mai>>word)
    {
        cout<<word<<" ";
    }
}
void panda1(stringstream &tom)
{
    string word;
    while (tom>>word)
    {
        panda1(tom);
        cout<<word<<" ";
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream mai;
    mai<<s;
    panda1(mai);
    cout<<endl;
    stringstream tom;
    tom<<s;
    panda(tom);
    
    return 0;
}