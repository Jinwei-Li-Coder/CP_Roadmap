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
        int ans = INF;
        int cur_coin = 0;

        for (int one = 0; one <= 2; one++) {
            for (int three = 0; three <= 1; three ++) {
                for (int six = 0; six <= 3; six++) {
                    for (int ten = 0; ten <= 2; ten ++) {
                        cur_coin = one + three + six + ten;
                        int cur_amount = one + three * 3 + six * 6 + ten * 10;
                        int rem = n - cur_amount;
                        if (rem >= 0 && rem % 15 == 0){
                            // cout << rem << endl;
                            // cout << one << " * 1 " << three << " * 3 " << six << " * 6"  << ten << " * 10 " << rem/15 << " * 15" << endl;
                            ans = min(ans, cur_coin + rem / 15);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}