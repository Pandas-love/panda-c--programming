#include <bits/stdc++.h>
using namespace std;
int n;
int *get()
{
    cin>>n;
    int *ar=new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
    return ar;
}
int main()
{
    int *re=get();
    *(re+n)=10;
    *(re+n+1)=12;
    for (int i = 0; i < n+2; i++)
    {
        cout<<re[i]<<" ";
    }
    delete[] re;
    return 0;
}