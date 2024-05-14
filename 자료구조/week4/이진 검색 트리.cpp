#include <bits/stdc++.h>

using namespace std;

vector <pair<int, int>> node;
int N, n, root = -1;

void post(int n)
{
   if (node[n].first != -1)
      post(node[n].first);
   if (node[n].second != -1)
      post(node[n].second);
   cout << n << '\n';
}

int main(void)
{
   cin.tie(0)->sync_with_stdio(false);

   node.resize(1000001, { -1, -1 });

   while (cin >> n)
   {
      // if (n == -1) break; // 디버깅 할때만
      if (root == -1)
         root = n;
      else
      {
         int R = root;
         while (true)
         {
            if (R > n)
            {
               if (node[R].first == -1)
               {
                  node[R].first = n;
                  break;
               }
               R = node[R].first;
            }
            else
            {
               if (node[R].second == -1)
               {
                  node[R].second = n;
                  break;
               }
               R = node[R].second;
            }
         }
      }
   }

   post(root);

   return 0;
}