// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> partitionLabels(string s) {
    map<char, int> mp;
    map<char, int> start;
    map<char, int> end;
    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];
      if (mp.find(ch) != mp.end()) {
        mp.insert({ch, 1});
        start[ch] = i;
      } else {
        end[ch] = i;
      }
    }
    vector<int> ans;
    int l = 0, r = 0;
    while (r < s.length()) {
      int t = end[s[l]];
      while (++r <= t) {
        t = max(t, end[s[r]]);
      }
      ans.push_back(t - l + 1);
      l = r = t + 1;
    }
    return ans;
  }
};

int main() {
  vector<int> v;
  int n, k;
  // cin >> n >> k;
  // for (int i = 0; i < n; i++) {
  //   int x;
  //   cin >> x;
  //   v.push_back(x);
  // }
  string s;
  cin >> s;
  Solution sl;
  vector<int> ans = sl.partitionLabels(s);
  for (auto x : ans) {
    cout << x << " ";
  }
  // cout << ans[0] << " " << ans[1] << endl;
}
