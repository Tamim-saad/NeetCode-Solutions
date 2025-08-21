#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  int minSubArrayLen(int target, vector<int> &nums) {
    int i, j, n, mini = INT_MAX, curr;
    n = nums.size();

    curr = i = j = 0;

    while (i < n) {
      curr += nums[i];

      while (curr >= target) {
        mini = min(mini, i - j + 1);
        curr -= nums[j++];
      }
      i++;
    }

    return (mini == INT_MAX) ? 0 : mini;
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

  string s, t;
  // cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.minSubArrayLen(k, v));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
