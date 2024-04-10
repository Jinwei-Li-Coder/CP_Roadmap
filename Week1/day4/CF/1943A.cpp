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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a[t] ++;
        }
        bool a_pick = false;
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            if (a[i] == 0) {
                ans = i;
                break;
            }
            if (a[i] == 1) {
                if (a_pick) {
                    ans = i;
                    break;
                } else {
                    a_pick = true;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}