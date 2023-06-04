#include<bits/stdc++.h>
using namespace std;

string inputstring(string s, string x)
{
    string newstring;
    int len1 = s.length();
    int len2 = x.length();

    for (int i = 0; i < len1; i++)
    {
        int match = 1;

        for (int j = 0; j < len2; j++)
        {
            if (s[i + j] != x[j])
            {
                match = 0;
                break;
            }
        }

        if (match==1)
        {
            newstring += "$";
            i += len2 - 1;
        }
        else
        {
            newstring += s[i];
        }
    }

    return newstring;
}

int main()
{
    int t;
    cin >> t;

    while (t>0)
    {
        string s, x;
        cin >> s >> x;

        string newstring = inputstring(s, x);

        cout << newstring << endl;
        t--;
    }

    return 0;
}