#include<bits/stdc++.h>
using namespace std;

class mai
{
    public:
    string name;
    int age;
    int mathmarks;
    int engmarks;
};

int main()
{
    int n;
    cin>>n;
    mai panda[n];
    for (int i = 0; i < n; i++)
    {
        cin>>panda[i].name>>panda[i].age>>panda[i].mathmarks>>panda[i].engmarks;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; i < n; i++)
        {
        if (panda[i].mathmarks>panda[j].mathmarks)
            {
                swap(panda[i],panda[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<panda[i].name;
    }
    
    return 0;
}