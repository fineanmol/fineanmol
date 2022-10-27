#include <bits/stdc++.h>
using namespace std;
int main()
{
    int yr;
    cin >> yr;
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
            if (yr % 400 == 0)
            {
                cout << "entered year is a leap year";
            }
            else
            {
                cout << "entered year is not a leap year";
            }
        }
        else
        {
            cout << "entered year is a leap year";
        }
    }
    else
    {
        cout << "entered year is not a leap year";
    }
    return 0;
}
