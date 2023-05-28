#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    char name[40];
    int age;
    float height;
    person(char[], int, int); 
    void comparing(person &other)
    {
        if (age < other.age)
        {
            cout << "Tomal is older";
        }
        else if (age > other.age)
        {
            cout << "Maisha is older";
        }
        else
        {
            cout << "Both are same age";
        }
    }
};
person::person(char n[], int a, int h)
{
    strcpy(name, n);
    age = a;
    height = h;
}
int main()
{

    person lok1("Maisha", 10, 1.45);
    person lok2("Tomal", 12, 1.46);
    lok1.comparing(lok2);
    // if (lok1.age>lok2.age)
    // {
    //     cout<<"Maisha is older";
    // }
    // else if (lok1.age<lok2.age)
    // {
    //     cout<<"Tomal is older";
    // }
    // else
    // {
    //     cout<<"Both are same age";
    // }
    return 0;
}