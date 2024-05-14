// 타노스는 요세푸스가 밉다
// 23.05.22
// 큐
// back에 첫 번째 수를 push, K마리 pop_front 
#include <bits/stdc++.h>
using namespace std;

int N, K;
queue <int> q;

int main(void)
{
   cin >> N >> K;

   for (int i = 1; i <= N; i++)
      q.push(i);

   while (q.size() >= K)
   {
      q.push(q.front());
      for (int i = 0; i < K; i++)
         q.pop();
   }

   cout << q.front();

   return 0;
}