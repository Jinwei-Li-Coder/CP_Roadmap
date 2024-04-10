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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int st = 0;
        while(st < a.size() && a[st] == a[0]) st ++;
        ans = min(ans, n - st);
        int ed = n - 1;
        while (ed >= 0 && a[ed] == a[n - 1]) ed--;
        ans = min(ans, ed - 0 + 1);
        if (a[0] == a[n - 1]) {
            int i = 0, j = n - 1;
            while(i < n && a[i] == a[0]) i++;
            while(j >= 0 && a[j] == a[0]) j--;
            int t = max(0, j - i + 1);
            ans = min(ans, t);
        }
        cout << ans << endl;
    }

    return 0;
}