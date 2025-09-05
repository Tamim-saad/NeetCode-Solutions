/// Alhamdulillah

#include <bits/stdc++.h>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
  string longestDiverseString(int a, int b, int c) {
    priority_queue<pair<int, char>> pq;
    if (a)
      pq.push({a, 'a'});
    if (b)
      pq.push({b, 'b'});
    if (c)
      pq.push({c, 'c'});

    string ans = "";
    char last2 = 'd';

    while (!pq.empty()) {
      auto x = pq.top();
      pq.pop();

      if (ans.length() >= 2 && x.second == ans.back() &&
          x.second == ans[ans.length() - 2]) {

        if (pq.empty()) {
          return ans;
        }

        auto y = pq.top();
        pq.pop();
        ans += y.second;
        if (y.first - 1 > 0)
          pq.push({y.first - 1, y.second});
        pq.push(x);
      } else {
        ans += x.second;
        if (x.first - 1 > 0)
          pq.push({x.first - 1, x.second});
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
  cin >> a >> b >> c;

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

  // string s, t;
  // cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.longestDiverseString(a, b, c));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
