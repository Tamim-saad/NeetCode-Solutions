/// Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string reorganizeString(string s) {
    priority_queue<pair<int, char>> pq;
    vector<int> freq(26, 0);
    int n = s.length();

    for (auto c : s) {
      int x = ++freq[c - 'a'];
    }

    for (char c = 'a'; c <= 'z'; c++) {
      if (freq[c - 'a'] > 0) {
        pq.push({freq[c - 'a'], c});
      }
    }

    string ans = "";

    while (!pq.empty()) {
      auto x = pq.top();
      pq.pop();

      if (!ans.empty() && x.second == ans.back()) {

        if (pq.empty())
          return "";

        auto y = pq.top();
        pq.pop();

        ans += y.second;
        if (--y.first > 0)
          pq.push(y);

        pq.push(x);
      } else {
        ans += x.second;

        if (--x.first > 0)
          pq.push(x);
      }
    }

    return ans;
  }
};

int main() {
  int n, k, a, b, c;
  // cin >> n;

  int x;
  vector<int> v; // Resize the vector before accessing it
  // cin >> a >> b >> c;

  // for (int i = 0; i < n; i++) {
  //   cin >> x;
  //   v.emplace_back(x);
  // }
  // vector<int> v2; // Resize the vector before accessing it
  // for (int i = 0; i < k; i++) {
  //   cin >> x;
  //   v2.emplace_back(x);
  // }

  // string str, t;
  // cin >> t;

  string s, t;
  cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.reorganizeString(s));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
