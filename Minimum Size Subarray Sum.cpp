#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int numRescueBoats(vector<int> &people, int limit) {

    int i, j, n, ans = 0, idx;
    n = people.size();

    sort(people.begin(),people.end());

    i = 0;
    j = n - 1;

    while (j >= i) {
      if (i==j || people[i] + people[j] <= limit) {
        i++;
        j--;
      } else {
        j--;
      }
      ans++;
    }

    return ans;
  }
};

int main() {
  int n, k, target;
  cin >> n >> k;

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
  cout << (sl.numRescueBoats(v, k));
  // if
  //   cout << "true";
  // else
  //   cout << "false";

  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
