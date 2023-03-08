// https://www.codechef.com/problems/EQUALELE
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;

   vector<int> arr;
   map<int, int> m;
   for (int i = 0; i < n; i++)
   {
      int num;
      cin >> num;

      arr.push_back(num);
      m[num] += 1;
   }

   int maxo = 0;
   int maxc;
   for (int i = 0; i < n; i++)
   {
      int cur = m[arr[i]];
      if (cur > maxo)
      {
         maxo = cur;
         maxc = arr[i];
      }
   }

   int ans = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] != maxc)
      {
         ans++;
      }
   }
   cout << ans << "\n";
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }

   return 0;
}
