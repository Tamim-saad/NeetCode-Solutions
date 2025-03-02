// say Alhamdulillah

#include <bits/stdc++.h>
#include <vector>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update>
//     indexed_multiset;

#define ll unsigned long long
class Solution {
 public:
  vector<vector<int>> adj_list;
  vector<int> par, vis;

  void dfs(int curr, int parnt) {
    par[curr] = parnt;
    vis[curr] = 1;

    for (int i = 0; i < adj_list[curr].size(); i++) {
      int neigh = adj_list[curr][i];
      if (!vis[neigh]) {
        // if (par[curr] != neigh) {
        dfs(neigh, curr);
      }
    }
    return;
  }

  int countComponents(int n, vector<vector<int>>& edges) {
    vis.resize(n, 0);
    par.resize(n, -1);
    adj_list.resize(n);

    for (auto x : edges) {
      adj_list[x[0]].emplace_back(x[1]);
      adj_list[x[1]].emplace_back(x[0]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (!vis[i]) {
        dfs(i, i);
        ans++;
      }
    }
    return ans;
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
