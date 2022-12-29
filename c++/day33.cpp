#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 253;

    cout << "1 + ";
    for (int i = 1; i < n; i++)
    {
        cout << "x" << ch << "/" << i << "!"
             << " + ";
    }
}