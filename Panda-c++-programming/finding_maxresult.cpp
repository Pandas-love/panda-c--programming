#include <bits/stdc++.h>
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
    cin >> n;
    person mai[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mai[i].name >> mai[i].age >> mai[i].marks;
    }
    person max;
    max.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mai[i].marks>max.marks)
        {
            max=mai[i];
        }
    }
    cout<<max.name<<" "<<max.age<<" "<<max.marks<<endl;

    return 0;
}