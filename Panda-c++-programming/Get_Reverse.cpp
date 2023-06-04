#include <bits/stdc++.h>
using namespace std;

class people
{
public:
    string peoplename;
    int peopleClass, Mathmarks, Englishmarks;
    char peoplesection;
};

int main()
{
    int n;
    cin >> n;

    people mai[n];

    for (int i = 0; i < n; i++)
    {
        cin >> mai[i].peoplename;
        cin >> mai[i].peopleClass;
        cin >> mai[i].peoplesection;
        cin >> mai[i].Mathmarks;
        cin >> mai[i].Englishmarks;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << mai[i].peoplename << " " << mai[i].peopleClass << " " << mai[i].peoplesection << " " << mai[i].Mathmarks << " " << mai[i].Englishmarks << endl;
    }
    return 0;
}