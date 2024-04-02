#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;
const int mod = 1e9+7;

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<LL> a(n);
        LL tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        vector<LL> max_arr(n);
        for (int i = 0; i < n; i++) {
            max_arr[i] = max(a[i], 0LL);
            if (i >= 1) max_arr[i] = max(max_arr[i], max_arr[i - 1] + a[i]);
        }
        LL max_sub_arr_sum = *max_element(max_arr.begin(), max_arr.end());
        LL rem = tot - max_sub_arr_sum;
        LL expand_sum = max_sub_arr_sum;
        for (int i = 0; i < k; i++) {
            expand_sum *= 2;
            expand_sum %= mod;
        }
        LL ans = (expand_sum + rem) % mod;
        if (ans < 0) ans += mod;
        cout << ans << endl;

    }

    return 0;
}