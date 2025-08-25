/// Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string predictPartyVictory(string senate) {
    int r = 0, d = 0, remD = 0, remR = 0;
    for (auto x : senate) {
      if (x == 'R')
        remR++;
      if (x == 'D')
        remD++;
    }
    int n = senate.size();

    for (int i = 0; i <= INT_MAX; i++) {

      if (remR == 0 || (remR * 2 <= remD))
        return "Dire";

      if (remD == 0 || (remD * 2 <= remR))
        return "Radiant";

      if (senate[i % n] == 'R') {
        if (r < 0) {
          senate[i % n] = 'Z';
          r++;
        } else {
          remD--;
          d--;
        }
      } else if (senate[i % n] == 'D') {
        if (d < 0) {
          senate[i % n] = 'Z';
          d++;
        } else {
          remR--;
          r--;
        }
      }
    }

    return "";
  }
};

int main() {
  int n, k;
  // cin >> n >> k;

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

  string str, t;
  cin >> t;

  // string s, t;
  // cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.predictPartyVictory(t));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
