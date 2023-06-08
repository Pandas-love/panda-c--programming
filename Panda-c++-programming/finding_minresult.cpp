#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
    string name;
    int age;
    int marks;  
};

int main()
{
    int n;
    cin>>n;
    person mai[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mai[i].name>>mai[i].age>>mai[i].marks;
    }
    
    person min;
    min.marks=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min.marks>mai[i].marks)
        {
            min=mai[i];
        }
    }

    cout<<min.name<<" "<<min.age<<" "<<min.marks<<endl;
    
    return 0;
}