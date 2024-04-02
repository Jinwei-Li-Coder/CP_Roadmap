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
        int n, k;
        scanf("%d%d",&n, &k);
        if (k >= n - 1) printf("%d\n", 1);
        else printf("%d\n", n);
    }


    return 0;
}