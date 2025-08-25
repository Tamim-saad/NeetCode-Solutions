/// Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int integerBreak(int n) {
    if (n == 2)
      return 1;
    if (n == 3)
      return 2;

    int prod = 1;
    while (n % 3 != 0) {
      prod *= 2;
      n -= 2;
    }
    int power = n / 3;
    for (int i = 0; i < power; i++) {
      prod *= 3;
    }
    return prod;
  }
};

int main() {
  int n, k;
  cin >> n;

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

  // string s, t;
  // cin >> s;
  // cout << "test\n";
  // cout << s << endl;

  Solution sl;
  cout << (sl.integerBreak(n));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
