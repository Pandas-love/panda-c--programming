#include<bits/stdc++.h>
using namespace std;

class panda
{
    public:
    string name;
    int age; 
    int marks;
};

int main()
{
    int n;
    cin>>n;
    panda mai[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>mai[i].name;
        cin>>mai[i].age;
        cin>>mai[i].marks;
    }
    panda tom[n];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mai[i].marks<mai[j].marks)
            {
                swap(mai[i],mai[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mai[i].name<<" "<<mai[i].age<<" "<<mai[i].marks<<endl;
    }
    return 0;
}