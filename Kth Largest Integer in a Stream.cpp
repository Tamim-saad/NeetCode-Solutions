#include <bits/stdc++.h>
using namespace std;

class KthLargest {
public:
  priority_queue<int> pq;
  KthLargest(int k, vector<int> &nums) {
    for (auto x : nums) {
      pq.push(x);
    }
  }

  int add(int val) {
    pq.push(val);
    priority_queue<int> pq2 = pq;
    int t = k;
    while (t--) {
      pq2.pop();
    }
    return pq2.top();
  }
};
