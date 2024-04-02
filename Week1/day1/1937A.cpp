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
        LL n;
        scanf("%lld", &n);
        int i = 1;
        while(i * 2 <= n) {
            i*=2;
        }
        printf("%d\n", i);

    }

    return 0;
}