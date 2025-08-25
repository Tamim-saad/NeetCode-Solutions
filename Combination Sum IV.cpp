/// Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int combinationSum4(vector<int> &nums, int target) {
    vector<unsigned long long> dp(target + 1, 0);
    dp[0] = 1;

    for (unsigned long long i = 0; i <= target; i++) {
      if (dp[i]) {
        for (auto x : nums) {
          if (i + x <= (unsigned long long)target) {
            dp[i + x] += dp[i];
          }
        }
      }
    }
    return (int)dp[target];
  }
};

int main() {
  int n, k;
  cin >> n >> k;

  int x;
  vector<int> v; // Resize the vector before accessing it
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

  // string s, t;
  // cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.combinationSum4(v, k));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
