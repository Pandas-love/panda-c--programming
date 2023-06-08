#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if(m>n)
    {
        swap(m,n);
    }
    int a=m;int b=n;int LCM=a*b;
    do
    {
        int r=b%a;
        b=a;
        a=r;
    } while (a!=0);
    LCM=LCM/b;
    cout<<LCM;
    return 0;
}