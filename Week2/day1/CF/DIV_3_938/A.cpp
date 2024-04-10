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
        int a, b;
        cin >> a >> b;
        int ans = INF;
        for (int i = 0; i < n; i++) {
            int x = i * a;
            int y = (n - i) / 2 * b;
            if ((n - i ) % 2 == 1) {
                x += a;
            }
            ans = min(ans, x + y);
        }
        cout << ans << endl;
    }

    return 0;
}