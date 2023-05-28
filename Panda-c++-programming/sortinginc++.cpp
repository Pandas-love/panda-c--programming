#include<bits/stdc++.h>
using namespace std;

int *sorting(int *ar,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(ar[i]<ar[j])
            {
                continue;
            }
            else
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    return ar;
}

int main()
{
    int n;
    cin>>n;
    int inarray[n];
    for (int i = 0; i < n; i++)
    {
        cin>>inarray[i];
    }
    int *receive=sorting(&inarray[0],n);
    for (int i = 0; i < n; i++)
    {
        cout<<receive[i]<<" ";
    }
    
    return 0;
}