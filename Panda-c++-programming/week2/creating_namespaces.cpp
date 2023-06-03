#include <bits/stdc++.h>
using namespace std;
namespace tomal
{
    class tomal
    {
    public:
        int age;
        string name;
        int bio_marks;
        int hm_marks;
        void getdata();
        void displaydata();
    };
    void tomal::getdata()
    {
        getline(cin, name);
        cin >> age >> bio_marks >> hm_marks;
    }
    void tomal::displaydata()
    {
        cout << name << " " << age << " " << bio_marks << " " << hm_marks;
    }
}
using namespace tomal;
class panda
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    void getdata1();
    void displaydata1();
};
void panda::getdata1()
{
    cin.ignore();//this code becomes useless without this line.
    getline(cin, name);
    cin >> age >> marks1 >> marks2;
}
void panda::displaydata1()
{
    cout << endl;
    cout << name << " " << age << " " << marks1 << " " << marks2 << endl;
}
int main()
{
    tomal::tomal *maisha = new tomal::tomal;
    panda *kiptuu = new panda;
    maisha->getdata();
    maisha->displaydata();
    kiptuu->getdata1();
    kiptuu->displaydata1();
    return 0;
}