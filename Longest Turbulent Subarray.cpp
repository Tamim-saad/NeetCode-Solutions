/// Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxTurbulenceSize(vector<int> &arr) {
    int n = arr.size(), inc, dec, maxi = 1;
    if (n == 1)
      return 1;

    for (int i = 0; i < n; i++) {
      if (i == 0) {
        inc = dec = 1;
      } else if (arr[i - 1] < arr[i]) {
        inc = dec + 1;
        dec = 1;
      } else if (arr[i - 1] > arr[i]) {
        dec = inc + 1;
        inc = 1;
      } else {
        inc = dec = 1;
      }
      maxi = max(maxi, max(inc, dec));
    }

    return maxi;
  }
};

int main() {
  int n, k;
  cin >> n;

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
  cout << (sl.maxTurbulenceSize(v));
  // v =
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   if (x != LONG_MAX && x != LONG_MIN) cout << x << " ";
  // }
}
