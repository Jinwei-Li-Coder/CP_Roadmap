#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;


vector<int> mul(vector<int>& A, int b) {
    vector<int> ret;
    for (int i = 0; i < A.size(); i++) {
        ret.push_back(A[i] * b);
    }
    int t = 0;
    for (int i = 0; i < ret.size(); i++) {
        int x = ret[i] + t;
        ret[i] = x % 10;
        t = x / 10;
    }
    while(t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    while(ret.size() > 1 && ret.back() == 0) ret.pop_back();
    return ret;
}

vector<int> add(vector<int>& A, vector<int> & B) {
    vector<int> ret;
    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        int x = i < A.size() ? A[i] : 0;
        int y = i < B.size() ? B[i] : 0;
        int sum = x + y + t;
        ret.push_back( sum % 10);
        t = sum / 10;
    }
    while (t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> cur = {1};
    vector<int> ans = {0};
    for (int i = 1; i <= n; i++) {
        cur = mul(cur, i);
        ans = add(ans, cur);
    }
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i];
    cout << endl;

    return 0;
}