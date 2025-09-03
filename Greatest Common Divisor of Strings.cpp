/// Alhamdulillah

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
  string gcdOfStrings(string str1, string str2) {

    string s, t, x;
    if (str1.length() <= str2.length()) {
      s = str1;
      t = str2;
    } else {
      s = str2;
      t = str1;
    }

    string ans = "";

    for (int i = 1; i <= s.length(); i++) {
      if (i == 1)
        x = s[0];
      else
        x += s[i - 1];

      int times = s.length() / x.length();

      string y = "";

      while (y.length() < s.length()) {
        y += x;
      }
      string z = y;
      while (z.length() < t.length()) {
        z += x;
      }
      if ((y == s && z == t))
        ans = x;
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
  cin >> s >> t;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.gcdOfStrings(s, t));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
