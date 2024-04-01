// 요세푸스 문제
// 24.04.01
// queue
#include <bits/stdc++.h>
using namespace std;

int N, K, num;
queue <int> q;

int main(void)
{
   cin.tie(0)->sync_with_stdio(false);

   cin >> N >> K;

   for (int i = 0; i < N; i++) q.push(i + 1);

   cout << "<";
   while (!q.empty())
   {
      for (int j = 0; j < K - 1; j++)
      {
         q.push(q.front());
         q.pop();
      }
      cout << q.front();
      q.pop();
      if (!q.empty()) cout << ", ";
   }
   cout << ">";

   return 0;
}