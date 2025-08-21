#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {

    int i, j, n, curr, idx;
    n = arr.size();

    i = 0;
    j = n - 1;

    while (j - i + 1 > k) {
      if (abs(arr[i] - x) > abs(arr[j] - x)) {
        i++;
      } else {
        j--;
      }
    }

    vector<int> ans;
    for (i = i; i <= j; i++)
      ans.emplace_back(arr[i]);

    return ans;
  }
};

int main() {
  int n, k, target;
  cin >> n >> k >> target;

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
  // cout <<
  v = (sl.findClosestElements(v, k, target));
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  for (auto x : v) {
    cout << x << " ";
  }
}
