//s=s+t; s+=t; s.append(t); this all can be used for concatetion of two string.
//

#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    string s;string t;
    myclass()
    {
        getline(cin,s);
        getline(cin,t);
        cin.ignore();
    }
};
int main()
{
    myclass tomal;
    // tomal.t=tomal.s+tomal.t;
    tomal.s.append(tomal.t);
    cout<<tomal.s<<endl;
    return 0;
}