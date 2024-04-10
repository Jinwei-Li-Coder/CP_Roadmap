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
        vector<char> path(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> path[i];
        }
        path[n] = '.';
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (path[i] == '@') sum++;
            else if (path[i] == '*' && path[i + 1] == '*') {
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}