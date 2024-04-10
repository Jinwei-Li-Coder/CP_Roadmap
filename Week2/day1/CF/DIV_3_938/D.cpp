#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> st;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            st[b[i]] ++;
        }
        int cnt = 0; // how many matched in cur subarray
        unordered_map<int, int> cur;
        int ans = 0;
        for (int i = 0, j = 0; i < n; i++) {
            if (st.count(a[i])) {
                cnt -= min(st[a[i]], cur[a[i]]);
                cur[a[i]] ++;
                cnt += min(cur[a[i]], st[a[i]]);
            }
            // cout << "short " << j << " " << i << " " << cnt << endl;
            if (i - j + 1 < m) continue;
            // cout << j << " " << i << " " << cnt << endl;
            if (cnt >= k) {
                ans ++;
                
            }
            if (st.count(a[j])) {
                cnt -= min(cur[a[j]], st[a[j]]);
                cur[a[j]] --;
                cnt += min(cur[a[j]], st[a[j]]);
            }
            j++;
        }
        cout << ans << endl;

        

    }

    return 0;
}