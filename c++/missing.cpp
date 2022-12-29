#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > mx)
        {
            mx = nums[i];
        }
    }
    int DAT[mx + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        DAT[nums[i]]++;
    }
    for (int i = 1; i <= mx; i++)
    {
        if (DAT[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}