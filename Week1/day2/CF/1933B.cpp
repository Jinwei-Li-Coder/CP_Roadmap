#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        int n;
        int sum = 0;
        cin >> n;
        bool has_mod_1 = false;
        bool has_mod_2 = false;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            sum += t;
            if (t % 3 == 1) has_mod_1 = true;
            else if (t % 3 == 2) has_mod_2 = true;
        }
        if (sum % 3 == 0) cout << "0" << endl;
        else if (sum % 3 == 1) {
            if (has_mod_1) cout << 1 << endl;
            else cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}