#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int mathmark;
};

void measure(student &s1,student &s2)
{
    student temp;
    if (s1.mathmark<s2.mathmark)
    {
        temp=s1;
        s1=s2;
        s2=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    student mai[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mai[i].name>>mai[i].age>>mai[i].mathmark;
    }
    for (int i = 0; i < n-1; i++)
    {
        measure(mai[i],mai[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mai[i].name<<" "<<mai[i].age<<" "<<mai[i].mathmark<<endl;
    }
    return 0;
}