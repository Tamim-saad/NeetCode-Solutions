// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update>
//     indexed_multiset;

#define ll unsigned long long
class Solution {
 public:
  void islandsAndTreasure(vector<vector<int>>& grid) {
    queue<pair<int, int>> q;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[i].size(); j++) {
        if (!grid[i][j]) {
          q.push({i, j});
        }
      }
    }
    int i, j;
    while (!q.empty()) {
      auto x = q.front();
      q.pop();
      i = x.first;
      j = x.second;
      if (i && grid[i - 1][j] == INT_MAX) {
        grid[i - 1][j] = 1 + grid[i][j];
        q.push({i - 1, j});
      }
      if (i < grid.size() - 1 && grid[i + 1][j] == INT_MAX) {
        grid[i + 1][j] = 1 + grid[i][j];
        q.push({i + 1, j});
      }
      if (j && grid[i][j - 1] == INT_MAX) {
        grid[i][j - 1] = 1 + grid[i][j];
        q.push({i, j - 1});
      }
      if (j < grid[i].size() - 1 && grid[i][j + 1] == INT_MAX) {
        grid[i][j + 1] = 1 + grid[i][j];
        q.push({i, j + 1});
      }
    }
  }
};

// int main() {
//   int n, k;
//   cin >> n >> k;

//   int x;
//   vector<int> v;  // Resize the vector before accessing it
//   for (int i = 0; i < n; i++) {
//     cin >> x;
//     v.emplace_back(x);
//   }
//   // vector<int> v2; // Resize the vector before accessing it
//   // for (int i = 0; i < k; i++) {
//   //   cin >> x;
//   //   v2.emplace_back(x);
//   // }

//   // string str, t;
//   // cin >> t;

//   string s, t;
//   // cin >> s;
//   // cout << "test\n";
//   // cout << s << endl;

//   Solution sl;
//   cout << (sl.change(k, v));
//   // v =
//   // if
//   //   cout << "true";
//   // else
//   //   cout << "false";

//   // for (auto x : v) {
//   //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
//   // }
// }
