#include <bits/stdc++.h>
using namespace std;

class MedianFinder {
public:
  vector<int> v;
  MedianFinder() {}

  void addNum(int num) {
    if (v.empty())
      v.push_back(num);
    else {
      v.insert(upper_bound(v.begin(), v.end(), num), num);
    }
  }

  double findMedian() {
    int n = v.size();
    int a = v[n / 2];
    int b = a;
    if (n % 2 == 0) {
      b = v[n / 2 - 1];
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
