#include<bits/stdc++.h>
using namespace std;

int n;
int *getarray() //user-defined function as an pointer
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
    int *rece=getarray();
    for (int i = 0; i < n; i++)
    {
        cout<<rece[i]<<" ";
    }
    delete[] rece;
    return 0;
}