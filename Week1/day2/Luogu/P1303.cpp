#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector<int> ret;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int idx = i + j;
            if (ret.size() <= idx) ret.pb(mul);
            else ret[idx] += mul;

        }
    }
    int t = 0;
    for (int i = 0; i < ret.size(); i++) {
        int cur = t + ret[i];
        ret[i] = cur % 10;
        t = cur / 10;
    }
    while(t) {
        ret.pb(t % 10);
        t /= 10;
    }
    // while(ret.size() > 1 && ret.back() == 0) ret.pop_back();
    for (int i = ret.size() - 1; i >= 0; i--) cout << ret[i];
    return 0;
}