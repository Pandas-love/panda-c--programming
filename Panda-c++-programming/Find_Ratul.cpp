#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream mai;
    mai<<s;
    string search;int count1=0;
    while (mai>>search)
    {
        if(search=="Ratul")
        {
            cout<<"YES";
            count1++;
            break;
        }
    }
    if(count1==0)
    {
        cout<<"NO";
    }

    return 0;
}