#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int j=x.length();
    char y[j], z[j];
    int i;
    int c1 = 0;
    int c2 = 0;
    int k=0;
    while (x[i] != '\0')
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            c1++;
            y[i] = x[i];
            z[i] = tolower(x[i]);
        }
        else
        {
            if (x[i] >= 'a' && x[i] <= 'z')
            {
                c2++;
                y[i] = toupper(x[i]);
                z[i] = x[i];
            }
        }
        i++;
    }
    if (c1 > c2){
    while(y[k]!='\0'){
        cout << y[k];
        k++;
    }
    }
    else{
        while(z[k]!='\0'){
        cout << z[k];
        k++;
        }
    }
        return 0;
}