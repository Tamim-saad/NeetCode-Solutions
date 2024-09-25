// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    for (int i = 0; i < numbers.size() - 1; i++) {
      auto it = upper_bound(numbers.begin() + i + 1, numbers.end(),
                            target - numbers[i]) -
                numbers.begin() - 1;
      if (it < numbers.size() && numbers[it] == target - numbers[i]) {
        return {i + 1, it + 1};
      }
    }
  }
};

int main() {
  vector<int> v;
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  Solution sl;
  vector<int> ans = sl.twoSum(v, k);
  cout << ans[0] << " " << ans[1] << endl;
}
