#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> a, b;
        vector<int> a_dup, b_dup, a_single, b_single;

        int dup = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a[t] ++;
        }

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            b[t] ++;
        }
        for (auto pii : a) {
            if (pii.second == 2) a_dup.pb(pii.first);
            else a_single.pb(pii.first);
        }
        for (auto pii : b) {
            if (pii.second == 2) b_dup.pb(pii.first);
            else b_single.pb(pii.first);
        }
        vector<int> a_pick, b_pick;
        k *= 2;
        while(k > 0) {
            if (a_dup.size() > 0) {
                int x = a_dup.back();
                a_pick.pb(x);
                a_pick.pb(x);
                a_dup.pop_back();
                int y = b_dup.back();
                b_pick.pb(y);
                b_pick.pb(y);
                b_dup.pop_back();
                k -= 2;
            } else {
                a_pick.pb(a_single.back());
                b_pick.pb(a_single.back());
                a_single.pop_back();
                k--;
            }
        }
        for (auto x : a_pick) cout << x << " ";
        cout << endl;
        for (auto x : b_pick) cout << x << " ";
        cout << endl;
    }

    return 0;
}