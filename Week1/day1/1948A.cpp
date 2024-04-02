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
        if (n & 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
            vector<string> v = {"AA", "BB"};
            int idx = 0;
            string ans;
            while(n) {
                n -= 2;
                ans += v[idx];
                idx = 1 - idx;
            }
            printf("%s\n", ans.c_str());

        }
    }

    return 0;
}