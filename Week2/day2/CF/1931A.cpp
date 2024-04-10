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
        string ans = "";
        while(ans.size() < 3) {
            int rem_letter = 3 - ans.size();
            if (n - (rem_letter - 1) >= 26) {
                ans += 'z';
                n -= 26;
            } else {
                char ch = n - (rem_letter - 1) + 'a' - 1;
                ans += ch;
                n -= (n - (rem_letter - 1));
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}