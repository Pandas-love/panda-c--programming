#include <bits/stdc++.h>
using namespace std;

class people
{
public:
    string name;
    int peopleclass;
    char section;
    int id;
    int mathmark;
    int englishmark;
};

int main()
{
    int n;
    cin >> n;
    people mai[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mai[i].name;
        cin >> mai[i].peopleclass;
        cin >> mai[i].section;
        cin >> mai[i].id;
        cin >> mai[i].mathmark;
        cin >> mai[i].englishmark;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mai[i].name<<mai[i].peopleclass<<endl;
    }
    
    return 0;
}