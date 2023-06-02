//#include<bits/stdc++.h>
//*******build-in function header file needed**********
//utility => max&min algorithm => swap iomanip => setprecision

#include<iostream>
#include<iomanip>

int main()
{
    float m;
    std::cin>>m;
    std::cout<<std::setprecision(4)<<m;
    //setprecision is like printf("%.2f") but difference is here 4 means total number
    //going to show as output here total digit 4 thats why from input 10.25667 output we get 10.26
    //iomanip => setprecision utility => max&min algorithm => swap
    return 0;
}