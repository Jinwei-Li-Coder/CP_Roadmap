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
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int t; 
            cin >> t;
            if (t > ans) ans = t;
            else {
                int k = ans / t;
                if (t * k <= ans) k++;
                ans = k * t;
            }
        }

        cout << ans << endl;
    }

    return 0;
}