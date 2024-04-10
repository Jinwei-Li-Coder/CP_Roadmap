#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;


int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        vector<string> g = {"", ""};
        int n;
        cin >> n;
        cin >> g[0] >> g[1];
        // 0 : 未处理过，1：认真过来的处理过了，2：乱动过来的处理过了，3：处理过了
        vector<vector<int> > st(2, vector<int>(n));
        st[0][0] = 1;
        queue<pair<int, pair<int, int> > > q;
        q.push({1, {0, 0}});
        while(q.size()) {
            auto t = q.front();
            q.pop();
            int x = t.second.first;
            int y = t.second.second;
            if (t.first == 1) { // 认真过来的，这一步可以乱动
                for (int d = 0; d < 4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    if (nx < 0 || nx > 1 || ny < 0 || ny >= n) continue;
                    if ((st[nx][ny] & 2)) continue;
                    st[nx][ny] |= 2;
                    q.push({2, {nx, ny}});
                }
            } else if (t.first == 2) { // 乱动过来的，这一步只能认真动。
                char dir = g[x][y];
                int nx = x, ny = y;
                if (dir == '>') {
                    ny++;
                } else {
                    ny--;
                }
                if (nx < 0 || nx > 1 || ny < 0 || ny >= n) continue;
                if ((st[nx][ny] & 1)) continue;
                st[nx][ny] |= 1;
                q.push({1, {nx, ny}});
            }
        }
        if (st[1][n - 1] != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        


    }

    return 0;
}