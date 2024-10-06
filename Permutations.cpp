// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void backTrack(vector<int> curr, vector<int> rem, int n,
                 vector<vector<int>> &ans) {

    if (curr.size() == n) {
      ans.push_back(curr);
      return;
    }
    for (int i = 0; i < rem.size(); i++) {
      vector<int> tmp = rem;
      curr.push_back(tmp[i]);
      tmp.erase(tmp.begin() + i);
      backTrack(curr, tmp, n, ans);
      curr.pop_back();
    }
  }
  vector<vector<int>> permute(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int n = nums.size();
    backTrack({}, nums, n, ans);
    return ans;
  }
};