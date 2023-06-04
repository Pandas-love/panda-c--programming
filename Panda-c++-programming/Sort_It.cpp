#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int mathmark;
    int engmark;
    int motnumber;

    void setinput(string &name, int cls, char section, int id, int mathmark, int engmark)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
        this->mathmark = mathmark;
        this->engmark = engmark;
        this->motnumber = mathmark + engmark;
    }
};

void jaygabodol(student &s1, student &s2)
{
    student temp = s1;
    s1 = s2;
    s2 = temp;
}

void sajanostudent(student polapain[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N-i-1 ; j++)
        {
            if (polapain[j].motnumber <polapain[j + 1].motnumber ||
                (polapain[j].motnumber == polapain[j + 1].motnumber && polapain[j].id > polapain[j + 1].id))
            {
                jaygabodol(polapain[j], polapain[j + 1]);
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    student polapain[N];

    for (int i = 0; i < N; ++i)
    {
        string name;
        int cls, id, mathmark, engmark;
        char section;
        cin >> name >> cls >> section >> id >> mathmark >> engmark;
        polapain[i].setinput(name, cls, section, id, mathmark, engmark);
    }

    sajanostudent(&polapain[0], N);

    for (int i = 0; i < N; i++)
    {
        cout << polapain[i].name << " " << polapain[i].cls << " " << polapain[i].section
        << " " << polapain[i].id << " " << polapain[i].mathmark << " " << polapain[i].engmark <<endl;
    }

    return 0;
}