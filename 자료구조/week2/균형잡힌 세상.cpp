// 균형잡힌 세상
// 23.10.12
// stack
#include <bits/stdc++.h>
using namespace std;

string x;
stack <char> s;

int main(void)
{
   cin.tie(0)->sync_with_stdio(false);

   while (true)
   {
      s = stack<char>();
      getline(cin, x);
      if (x == ".") break;

      for (int i = 0; i < x.size(); i++)
      {
         s.push(x[i]);
         if (x[i] == ')' || x[i] == ']')
         {
            if (x[i] == ')')
            {
               if (s.top() == '(')
               {
                  s.pop();
                  s.pop();
               }
               else break;
            }
            else if (x[i] == ']')
            {
               if (s.top() == '[')
               {
                  s.pop();
                  s.pop();
               }
               else break;
            }
         }
      }

      cout << (s.empty() ? "yes\n" : "no\n");
   }

   return 0;
}