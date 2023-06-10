#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        freq[a - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char a = i + 97;
            cout << a << ": " << freq[i] << endl;
        }
    }
    return 0;
}