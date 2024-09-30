// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int sum = 0, ans = 0;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < gas.size(); i++) {
      s1 += gas[i];
      s2 += cost[i];
      sum += gas[i] - cost[i];
      if (sum < 0) {
        ans = i + 1;
        sum = 0;
      }
    }
    if (ans >= gas.size() || s1 < s2)
      return -1;
    else
      return ans;
  }
};

int main() {
  vector<int> v, v2;
  int n, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v2.push_back(x);
  }
  // string s;
  // cin >> s;
  // vector<int>
  Solution sl;
  int ans = sl.canCompleteCircuit(v, v2);
  // for (auto x : ans) {
  //   cout << x << " ";
  // }
  cout << ans;
  // cout << ans[0] << " " << ans[1] << endl;
}
