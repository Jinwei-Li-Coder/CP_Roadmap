#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;

vector<int> mul(vector<int>& A, int b) {
    vector<int> ans;
    for (int i = 0; i < A.size(); i++) {
        ans.push_back(A[i] * b);
    }
    int t = 0;
    for (int i = 0; i < ans.size(); i++) {
        int s = ans[i] + t;
        ans[i] = s % 10;
        t = s / 10;
    }
    while(t) {
        ans.push_back(t % 10);
        t /= 10;
    }
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        int n, a;
        cin >> n >> a;

        vector<int> cur = {1};
        for (int i = 2; i <= n; i++) {
            cur = mul(cur, i);
        }
        int ans = 0;
        for (auto x : cur) {
            if (x == a) ans ++;
        }
        cout << ans << endl;
    }

    return 0;
}