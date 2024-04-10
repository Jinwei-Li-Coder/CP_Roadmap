#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;

vector<int> mul(vector<int> & A, int b) {
    vector<int> ret;
    for (int i = 0; i < A.size(); i++) {
        ret.push_back(A[i] * b);
    }
    int t = 0;
    for (int i = 0; i < ret.size(); i++ ) {
        t += ret[i];
        ret[i] = t % 10;
        t /= 10;
    }
    while(t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    while (ret.size() > 1 && ret.back() == 0) ret.pop_back();
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;



    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        if (n < i) break;
        ans.push_back(i);
        n -= i;
        // cout << i << " pushed in " << endl;
    }
    int idx = ans.size() -1;
    while(n) {
        idx = (idx + ans.size()) % ans.size();
        ans[idx] ++;
        n--;
        idx --;
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    vector<int> cur = {1};
    for (int i = 0; i < ans.size(); i++) {
        cur = mul(cur, ans[i]);
    }
    for (int i = cur.size() - 1; i >= 0; i--) {
        cout << cur[i];
    }
    cout << endl;

    return 0;
}