//#include<bits/stdc++.h>
//*******build-in function header file needed**********
//utility => max&min algorithm => swap iomanip => setprecision


#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=0,n=0;
    cin>>m>>n;
    swap(m,n);//we also can use #include<algorithm> 
    //for setprecision we use "iomanip" header file
    //for max & min build in function "utility" header file
    cout<<m<<" "<<n<<endl;
    return 0;
}