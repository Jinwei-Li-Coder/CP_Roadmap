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
        int n;
        scanf("%d", &n);
        vector<LL> a(n + 1);
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        bool failed = false;
        for (int i = 0; i < n - 2; i++) {
            if (a[i] < 0) {
                failed = true;
                break;
            }
            a[i + 1] -= 2 * a[i];
            a[i + 2] -= a[i];
            a[i] = 0;
        }

        failed |= (a[n - 1] != 0 || a[n - 2] != 0);
        if (failed) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        
    }

    return 0;
}