#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    int age;
    int sum;int get;
    int summation(myclass st1, myclass st2)
    {
        cin>>st1.age>>st2.age;
        sum=st1.age+st2.age; return sum;
    }
};

int main()
{
    
    myclass st;
    st.get=st.summation(st,st);
    cout<<st.get<<endl;
    return 0;
}