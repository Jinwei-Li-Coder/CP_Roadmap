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
        vector<int> a(n);
        LL tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        LL can_pour = 0;
        LL avg = tot / n;
        bool  ok = true;
        for (int i = 0; i < n; i++) {
            if (can_pour + a[i] < avg) {
                ok = false;
                break;
            } else {
                can_pour += (a[i] - avg);
            }
        }
        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}