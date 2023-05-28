#include<bits/stdc++.h>
using namespace  std;

class gang
{
    public:
    int *get(int n)
    {
        int *ar=new int [n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        return ar;
    }
};

int main()
{
    int n;cin>>n;
    gang mem;
    int *rece=mem.get(n);
    for (int i = 0; i<n ; i++)
    {
        cout<<rece[i]<<" ";
    }
    return 0;
}