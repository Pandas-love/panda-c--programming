//ADD two corresponding value in an array and print them
#include<bits/stdc++.h>
using namespace std;

int n;
int *sum()
{
    cin>>n;
    int *ar=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main()
{
    int pot=0;
    int *add=sum();
    if(n%2==0)
    {
    for (int i = 0; i < n; i+=2)
    {
        pot=add[i]+add[i+1];
        cout<<pot<<" ";
    }
    }
    else
    {
        for (int i = 0; i < n-1; i+=2)
        {
            pot=add[i]+add[i+1];
            cout<<pot<<" ";
        }
        cout<<add[n-1];
    }
    delete add;
    return 0;
}