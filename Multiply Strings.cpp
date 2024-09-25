// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string multiply(string num1, string num2) {
    long long n1 = num1[0] - '0';
    for (long long i = 1; i < num1.size(); i++) {
      n1 = n1 * 10 + (num1[i] - '0');
    }
    long long n2 = num2[0] - '0';
    for (long long i = 1; i < num2.size(); i++) {
      n2 = n2 * 10 + (num2[i] - '0');
    }
    long long ans = n1 * n2;
    if (!n1 || !n2)
      return "0";
    cout << ans << endl;
    string s = "";
    while (ans) {
      s += '0' + ans % 10;
      ans /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
  }
};