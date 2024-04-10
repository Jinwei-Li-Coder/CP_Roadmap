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
        LL k;
        cin >> n >> k;
        vector<int> a(n);
        LL tot = 0;
        for (int i = 0; i < n ;i ++ ) {
            cin >> a[i];
            tot += a[i];
        }
        if (k >= tot) {
            cout << n << endl;
            continue;
        }
        int i = 0, j = n - 1;
        int ans = 0;
        int next_left = 1;
        while (i < j && k > 0) {
            if (next_left) {
                if (a[i] <= a[j]) {
                    int t = a[i];
                    k -= t;
                    k -= (t - 1);
                    if (k >= 0) ans ++;
                    i++;
                    a[j] -= (t - 1);
                    next_left = 0;
                } else {
                    int t = a[j];
                    a[i] -= t;
                    k -= t;
                    k -= t;
                    if (k >= 0) ans++;
                    j--;
                }
            } else {
                if (a[j] <= a[i]) {
                    int t = a[j];
                    k -= t;
                    k -=(t - 1);
                    if (k >= 0) ans ++;
                    j--;
                    a[i] -= (t - 1);
                    next_left = 1;
                } else {
                    int t = a[i];
                    a[j] -= t;
                    k -= t;
                    k -= t;
                    if (k >= 0) ans ++;
                    i++;
                }
            }
       
        }
        cout << ans << endl;

    }

    return 0;
}

    //  for (int t = i; t <= j; t++) cout << a[t] << " ";
    //         cout << " ans " << ans << " and k =" << k <<  endl;