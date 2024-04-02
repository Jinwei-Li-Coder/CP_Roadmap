#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <deque>
#include <stack>
#include <queue>
using namespace std;


int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());
        int x = a[(n - 1) / 2];
        int ans = 0;
        for (int i = (n - 1) / 2; i < a.size(); i++) {
            if (a[i] == x) ans++;
            else break;
        }
        printf("%d\n", ans);
    }
}
