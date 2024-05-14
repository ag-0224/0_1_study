#include <bits/stdc++.h>

using namespace std;

vector <vector<int>> node;
int N, root, parent, del, cnt;

void DFS(int n)
{
   if (n == del) return;
   if (node[n].size() == 0 || (node[n].size() == 1 && node[n][0] == del))
   {
      cnt++;
      return;
   }
   for (int x : node[n]) DFS(x);
}

int main(void)
{
   cin.tie(0)->sync_with_stdio(false);

   cin >> N;
   node.resize(N);

   for (int i = 0; i < N; i++)
   {
      cin >> parent;
      if (parent == -1) root = i;
      else node[parent].push_back(i);
   }

   cin >> del;
   DFS(root);
   cout << cnt;

   return 0;
}