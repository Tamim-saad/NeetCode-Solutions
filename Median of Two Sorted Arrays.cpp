#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n1 > 0) {
      nums2.insert(upper_bound(nums2.begin(), nums2.end(), nums1[(int)n1 / 2]),
                   nums1[(int)n1 / 2]);
      n2++;
    }
    if (n1 > 1 && n1 % 2 == 0) {
      nums2.insert(upper_bound(nums2.begin(), nums2.end(), nums1[n1 / 2 - 1]),
                   nums1[n1 / 2 - 1]);
      n2++;
    }

    int a = nums2[n2 / 2];
    int b = a;
    if (n2 % 2 == 0) {
      b = nums2[n2 / 2 - 1];
    }
    return (a + b) / 2.0;
  }
};

int main() {
  vector<int> v, v2;
  int n, n2;
  cin >> n >> n2;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < n2; i++) {
    int x;
    cin >> x;
    v2.push_back(x);
  }
  Solution sl;
  cout << sl.findMedianSortedArrays(v, v2);
}
