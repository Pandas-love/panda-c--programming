#include <bits/stdc++.h>
using namespace std;

class people
{
    public:
        string peoplename;
        int peopleclass;
        char peoplesection;
        int peopleid;
};

int main()
{
    int n;
    cin>>n;

    people mai[n];

    for(int i=0;i<n;i++)
    {
        cin>>mai[i].peoplename;
        cin>>mai[i].peopleclass;
        cin>>mai[i].peoplesection;
        cin>>mai[i].peopleid;
    }
    int m=n;
    for(int i=0;i<n/2;i++)
    {
        int temp=mai[i].peopleid;
        mai[i].peopleid=mai[m].peopleid;
        mai[m].peopleid=temp;
        m--;
        cout<<mai[0].peopleid<<mai[2].peopleid<<temp;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<mai[i].peoplename<<" "<<mai[i].peopleclass<<" "<<mai[i].peoplesection<<" "<<mai[i].peopleid<<endl;
    }
    return 0;
}
