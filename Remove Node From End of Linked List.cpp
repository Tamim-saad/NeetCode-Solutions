/// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode dummy(0);
    ListNode *left = &dummy, *right = head;
    left->next = head;
    while (n > 1) {
      right = right->next;
      n--;
    }
    while (right->next) {
      right = right->next;
      left = left->next;
    }
    left->next = left->next->next;
    return dummy.next;
  }
};
