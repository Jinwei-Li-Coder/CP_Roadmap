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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int pre = 0;
        for (int i = 0; i < n; i++) {
            int cur = a[i];
            if (cur < 10) {
                if (cur < pre) {
                    cout << "NO" << endl;
                    goto outer;
                } else {
                    pre = cur;
                }
            } else {
                int first = cur / 10;
                int second = cur % 10;
                if (second >= first && first >= pre) {
                    pre = second;
                } else if (cur < pre) {
                    cout << "NO" << endl;
                    goto outer;
                } else {
                    pre = cur;
                }
            }
        }
        cout << "YES" << endl;
        outer:
        {

        }
    }

    return 0;
}