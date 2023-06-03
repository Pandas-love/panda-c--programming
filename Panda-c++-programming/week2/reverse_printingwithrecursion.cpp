#include <bits/stdc++.h>
using namespace std;

void recursion(int *t, int n, int i)
{

    if (n > 0)
    {
        i++;
        n--;
        recursion(t, n, i);
        cout << t[i] << " ";
    }
}
int main()
{
    int n;
    int i = 0;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    recursion(&arr[0], n, i);
    return 0;
}