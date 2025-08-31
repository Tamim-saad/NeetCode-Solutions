/// Alhamdulillah

#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
  string simplifyPath(string path) {
    int n = path.size(), inc, dec, maxi = 1, cnt = 0;
    string ans = "", s = "", t = "";
    stack<string> st;

    // cout << path << endl;

    for (int i = 0; i <= n; i++) {
      char x = i < n ? path[i] : '/';

      if (x != '/') {
        t += x;
        if (x == '.')
          cnt++;
        else
          cnt = 0;
      } else {
        // cout << cnt << " --- \n";
        if (t.length() == 1 && cnt == 1) {

        } else if (cnt == 2 && t.length() == 2) {
          if (!st.empty())
            st.pop();
        } else if (t.length()) {
          st.push(t);
          // cout << t << endl;
        }
        t = "";
        s = "";
        cnt = 0;
      }
    }
    vector<string> v;
    while (!st.empty()) {
      v.emplace_back(st.top());
      st.pop();
    }
    if (v.size() == 0)
      return "/";

    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
      // cout << v[i] << " -- \n";
      ans += "/";
      ans += v[i];
    }

    return ans;
  }
};

int main() {
  int n, k;
  // cin >> n;

  int x;
  vector<int> v; // Resize the vector before accessing it
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
  cout << (sl.simplifyPath(s));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
