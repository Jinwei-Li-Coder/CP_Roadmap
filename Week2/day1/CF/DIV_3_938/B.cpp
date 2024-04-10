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
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> should(n * n);
        vector<int> given(n * n);
        int min_val = INF;
        for (int i = 0; i < n * n; i++) {
            cin >> given[i];
            min_val = min(min_val, given[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int t = (min_val + (c * i)) + (d * j);
                should[i * n + j] = (min_val + (c * i)) + (d * j);
            }
        }
        sort(should.begin(), should.end());
        sort(given.begin(), given.end());
        bool ok = true;
        for (int i = 0; i < n * n; i++) {
            if (should[i] != given[i]) {
                // cout << "given i at " << i << " is " << given[i] << " but should be " << should[i] << endl;
                ok = false;
                break;
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