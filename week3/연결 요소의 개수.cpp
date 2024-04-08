// 연결 요소의 개수
// 23.08.30
#include <bits/stdc++.h>
using namespace std;

int N, M, u, v, cnt = 0;
vector <vector<int>> node;
vector <bool> check;

void DFS(int n)
{
   check[n] = true;
   for (int x : node[n])
      if (!check[x])
         DFS(x);
}

int main(void)
{
   cin >> N >> M;

   node = vector<vector<int>>(N + 1);
   check = vector<bool>(N + 1, false);

   for (int i = 0; i < M; i++)
   {
      cin >> u >> v;
      node[u].push_back(v);
      node[v].push_back(u);
   }

   for (int i = 1; i <= N; i++)
   {
      if (!check[i])
      {
         cnt++;
         DFS(i);
      }
   }

   cout << cnt;

   return 0;
}