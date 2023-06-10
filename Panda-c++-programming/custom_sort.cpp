#include<bits/stdc++.h>
using namespace std;

class panda
{
    public:
    char alphabhet;
    int count;
};

bool cmp(panda &a,panda &b)
{
    if(a.count>b.count)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    panda mai[26];
    for (int i = 0; i < 26; i++)
    {
        mai[i].alphabhet=i+97;
        mai[i].count=0;
    }
    for (int i = 0; i < n; i++)
    {
        char a;
        cin>>a;
        mai[a-'a'].count++;
    }
    sort(mai,mai+26,cmp);
    for (int i = 0; i < 26; i++)
    {
        if(mai[i].count>0)
        {
            // cout<<mai[i].alphabhet<<" "<<mai[i].count<<endl;
            for (int j = 0; j < mai[i].count; j++)
            {
                cout<<mai[i].alphabhet;
            }
            cout<<" ";
        }
    }
    return 0;
}