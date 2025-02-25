// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<tuple<int, int, int>, null_type, less<tuple<int, int, int>>,
//              rb_tree_tag, tree_order_statistics_node_update>
//     indexed_multiset;

// say Alhamdulillah

#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define ll long long

class Solution {
 public:
  int findTargetSumWays(vector<int>& nums, int target) {
    ll n = nums.size();
    ll sum = abs(accumulate(nums.begin(), nums.end(), 0));
    if (sum < abs(target)) return 0;
    vector<vector<ll>> dp(n + 1, vector<ll>(2 * sum + 2, 0));
    dp[0][sum] = 1;

    for (ll i = 1; i <= nums.size(); i++) {
      for (ll j = 0; j <= 2 * sum; j++) {
        ll x = nums[i - 1];
        if (0 <= j - x && j - x <= 2 * sum + 1 && dp[i - 1][j - x]) dp[i][j] += dp[i - 1][j - x];
        if (0 <= j + x && j + x <= 2 * sum + 1 && dp[i - 1][j + x]) dp[i][j] += dp[i - 1][j + x];
      }
    }
    // for (ll i = 0; i <= nums.size(); i++) {
    //   for (ll j = 0; j <= 2 * sum; j++) {
    //     cout << dp[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    return dp[nums.size()][sum + target];
  }
};

int main() {
  int n, k;
  cin >> n >> k;

  int x;
  vector<int> v;  // Resize the vector before accessing it
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.emplace_back(x);
  }
  // vector<int> v2; // Resize the vector before accessing it
  // for (int i = 0; i < k; i++) {
  //   cin >> x;
  //   v2.emplace_back(x);
  // }

  // string str, t;
  // cin >> t;

  string s, t;
  // cin >> s >> t;

  Solution sl;
  cout << (sl.findTargetSumWays(v, k));
  //   cout << "true";
  // else
  //   cout << "false";

  // for (int j = 0; j < n; j++)
  //   cout << v[j] << " ";
}
