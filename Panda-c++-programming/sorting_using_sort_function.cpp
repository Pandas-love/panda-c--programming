#include<bits/stdc++.h>
using namespace std;

class panda
{
    public:
    string name;
    int age;
    int mark;
};
bool tulona(panda &a,panda &b)
{
    if (a.mark>b.mark)
    {
        return true;//true=1
    }
    else
    {  
        return false;//false=0
    }
}
int main()
{
    int n;
    cin>>n;
    panda mai[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mai[i].name;
        cin>>mai[i].age;
        cin>>mai[i].mark;
    }
    sort(mai,mai+n,tulona);
    for (int i = 0; i < n; i++)
    {
        cout<<mai[i].name<<" "<<mai[i].age<<" "<<mai[i].mark<<endl;
    }
    return 0;
}