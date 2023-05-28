#include <bits/stdc++.h>
using namespace std;

class gang
{
public:
    int getx()
    {
        int x;
        cin >> x;
        return x;
    }

    int gety()
    {
        int y;
        cin >> y;
        return y;
    }
};

int main()
{
    gang input;
    input.getx();
    input.gety();
    cout << "summation: " << input.getx() + input.gety() << endl;
    return 0;
}