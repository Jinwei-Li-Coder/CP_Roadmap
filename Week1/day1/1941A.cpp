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

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        vector<int> b(n), c(m);
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &c[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i] + c[j] <= k) {
                    ans ++;
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}