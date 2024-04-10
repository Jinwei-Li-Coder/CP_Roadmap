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
        int n, m, x;
        cin >> n >> m >> x;
        unordered_set<int> cur_possible = {x - 1};
        unordered_set<int> tmp;
        for (int i = 0; i < m; i++) {
            int r;
            cin >> r;
            char dir;
            cin >> dir;
            if (dir == '0') {
                for (auto cur : cur_possible) {
                    int des = (cur + r) % n;
                    tmp.insert(des);
                }
            } else if(dir == '1') {
                for (auto cur : cur_possible) {
                    int des = (cur - r + n) % n;
                    tmp.insert(des);
                }
            } else {
                for (auto cur : cur_possible) {
                    int des1 = (cur + r) % n;
                    tmp.insert(des1);
                    int des2 = (cur - r + n) % n;
                    tmp.insert(des2);
                    
                }
            }
            cur_possible = tmp;
            tmp.clear();
        }
        vector<int> ans;
        for (auto pos : cur_possible) {
            ans.push_back(pos);
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (auto pos : ans) cout << pos + 1 << " ";
        cout << endl;

    }

    return 0;
}