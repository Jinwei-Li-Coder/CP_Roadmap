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
        vector<vector<char> > g(2, vector<char>(n ));
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++) g[0][i] = a[i];
        for (int i = 0; i < n; i++) g[1][i] = b[i];
        string ans = "";
        int row_1_cnt = 1;
        int row_2_cnt = 0;
        int x = 0, y = 0;
        int ly = n - 1;
        while(true) {
            ans += g[x][y];
            if (x == 1 && y == ly) break;
            if (x == 1) {
                y++;
            } else if (y == ly) {
                x++;
            } else {
                char right = g[x][y + 1];
                char down = g[x + 1][y];
                if (right == down) {
                    row_2_cnt += row_1_cnt;
                    y++;
                } else if (right < down) {
                    row_2_cnt = 0;
                    y++;
                } else {
                    x++;
                    row_2_cnt += row_1_cnt;
                    row_1_cnt = 0;
                }
            }
        }
        cout << ans << endl;
        cout << (row_1_cnt + row_2_cnt) << endl;
        
        
    }

    return 0;
}

// 00100111
// 11101101