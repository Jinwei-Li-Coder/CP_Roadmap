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
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if (a[0] % a[1] != 0) {
            cout << "YES" << endl;
        } else {
            bool ans = false;
            for (int i = 2; i < n; i++) {
                int mod = a[i] % a[0];
                if (mod % a[1] != 0) {
                    ans = true;
                    break;
                }
            }
            if (ans) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}