#include <bits/stdc++.h>
using namespace std;

string x;
bool check;

int main(void)
{
    cin.tie(0)->sync_with_stdio(false);

    while (true)
    {
        cin >> x;
        check = true;

        if (x == "0") break;

        for (int i = 0; i < x.size() / 2; i++)
        {
            if (x[i] != x[x.size() - 1 - i])
            {
                check = false;
                break;
            }
        }

        cout << (check ? "yes\n" : "no\n");
    }

    return 0;
}