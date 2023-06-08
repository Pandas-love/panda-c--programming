#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]; 
    }
    int i=0;
    while (n>0)
    {
        cout<<a[i]<<" "<<a[i+1]<<endl;
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
        do
        {
            int r=a[i+1]%a[i];
            a[i+1]=a[i];
            a[i]=r;
        } while (a[i]!=0);
        i++;n--;
    }
    cout<<"GCD: "<<a[i];
    return 0; 
}