// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class CountSquares {
public:
  vector<pair<int, int>> v;
  map<pair<int, int>, int> mp;
  CountSquares() {}

  void add(vector<int> point) {
    mp[{point[0], point[1]}]++;
    v.emplace_back(make_pair(point[0], point[1]));
  }

  int count(vector<int> point) {
    int x = point[0];
    int y = point[1];
    int x1, y1, ans = 0;
    for (auto it : v) {
      x1 = it.first;
      y1 = it.second;
      if (abs(x - x1) == abs(y - y1) and x != x1) {
        ans += mp[{x1, y}] * mp[{x, y1}];
      }
    }
    return ans;
  }
};