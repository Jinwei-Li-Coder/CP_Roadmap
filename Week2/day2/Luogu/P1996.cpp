#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;

struct ListNode{
    int num;
    ListNode* next;
    ListNode(int x) {
        num = x;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    auto head = new ListNode(1);
    auto cur = head;
    for (int i = 2; i <= n; i++) {
        cur = cur -> next = new ListNode(i);
    }

    cur = cur -> next = head;


    queue<int> q;
    while(q.size() != n) {
        for (int i = 1; i < m - 1; i++) {
            cur = cur -> next;
        }

        q.push(cur-> next -> num);
        cur = cur -> next = cur -> next -> next;
    }
    while(q.size()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}