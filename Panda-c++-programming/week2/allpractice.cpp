#include <bits/stdc++.h>
using namespace std;

class practice
{
public:
    string n;
    string s;
    practice()
    {
        getline(cin, n);
        
        getline(cin, s);
        cin.ignore();
    }
};
int main()
{
    practice tomal;
    if (tomal.s == tomal.n)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    cout<<tomal.s.size()<<endl;
    tomal.s.resize(tomal.n.size()+2,'@');
    cout<<tomal.s<<endl;
    tomal.s.clear();
    cout<<tomal.s<<endl;
    if(tomal.s.empty()!=1) //1 means empty and return true
    {
        cout<<"Non Empty"<<endl;
    }
    else
    {
        cout<<"Empty"<<endl;
    }
    cout<<tomal.n[0]<<endl;
    cout<<tomal.n.at(3)<<endl;
    cout<<tomal.n.front()<<endl;
    cout<<tomal.n.back()<<endl;
    tomal.s.resize(3,'x');
    cout<<tomal.s<<endl;
    cout<<tomal.n.append(tomal.s)<<endl;
    tomal.n.push_back('T');
    cout<<tomal.n<<endl;
    tomal.n.pop_back();
    cout<<tomal.n<<endl;
    tomal.s.erase();
    cout<<tomal.s<<endl;//output on 14th line
    cout<<tomal.n.replace(1,2,"mai")<<endl;
    cout<<tomal.n.erase(8)<<endl;
    cout<<tomal.n.replace(0,8,"I Love You kiptuu")<<endl;
    int count=0;
for (string::iterator i = tomal.n.begin(); i < tomal.n.end() ; i++)
    {
        count++;
    }
    cout<<"Letters Count: "<<count<<endl;
    stringstream it;
    it<<tomal.n;
    int count1=0;string word;
    while (it>>word)
    {
        count1++;
    }
    cout<<"word count: "<<count1<<endl;
    return 0;
}