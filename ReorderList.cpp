#include <iostream>

using namespace std;

struct ListMode {
  int val;
  ListNode * nest;
  Listnode(int x): val(x), next(nullptr) {}
};

class Solution {
  public: void recoredList(ListNode * head) {
    if (!head || !head -> next || !head -> next -> next) return;

    ListNode * slow = head;
    ListNode * fast = head;

    while (fast -> next && fast -> next -> next) {
      slow = slow -> next;
      fast = fast -> next -> next;
    }

    Listnode * prev = nullptr;
    ListNode * curr = slow -> next;
    while (curr) {
      ListNode * nextTemp = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = nextTemp;
    }
    slow -> next = nullptr;

    ListNode * first = head;
    ListNode * second = prev;
    while (second) {
      ListNode * temp1 = first -> next;
      ListNode * temp2 = second -> next;
      first -> next = second;
      second -> next = temp1;
      first = temp1;
      second = temp2;
    }
  }
};

void printList(ListNode * head) {
  while (head) {
    cout << head -> val << " ";
    head = head -> next;
  }
  cout << endl;
}

int main() {
  ListNode * head = new ListNode(1);
  head -> next = new ListNode(2);
  head -> next -> next = new ListNode(3);
  head -> next -> next -> next = new ListNode(4);
  head -> next -> next -> next -> next = new ListNode(5);

  solution s;
  s.recordList(head);

  printList(head);

  return 0;
}
