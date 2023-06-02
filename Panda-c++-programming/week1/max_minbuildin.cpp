//#include<bits/stdc++.h>
//*******build-in function header file needed**********
//utility => max&min algorithm => swap iomanip => setprecision

#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int big=max(m,n);
    cout<<"BIGGEST NUMBER IS: "<<big<<endl;
    int small=min(m,n);
    cout<<"SMALLEST NUMBER IS: "<<small<<endl;
    return 0;
}