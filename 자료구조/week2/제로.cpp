// 제로
#include <bits/stdc++.h>
using namespace std;

int K, x, sum = 0;
stack <int> s;

int main(void)
{
    cin.tie(0)->sync_with_stdio(false);

    cin >> K;

    for(int i = 0; i < K; i++)
    {
        cin >> x;

        if (x) s.push(x);
        else s.pop();
    }

    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}