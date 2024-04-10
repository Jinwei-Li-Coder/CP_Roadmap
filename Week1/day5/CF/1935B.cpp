#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;

int find_mex(int start, int end, vector<int>& v) {
    unordered_map<int, bool> st;
    for (int i = start; i < end; i++) {
        st[v[i]] = true;
    }
    for (int i = 0; ; i++) {
        if (!st[i]) return i;
    }
    return INF;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mex = find_mex(0, n, a);
        unordered_set<int> st;
        int cut = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] < mex) st.insert(a[i]);
            if (st.size() == mex) {
                cut = i;
                break;
            }
        }
        if (cut == a.size() - 1 || cut == -1) {
            cout << -1 << endl;
        } else {
            int mex2 = find_mex(cut + 1, n, a);
            if (mex != mex2) {
                cout << -1 << endl;
            } else {
                cout << 2 << endl;
                cout << 1 << " " << cut + 1 << endl;
                cout << cut + 2 << " " << n  << endl;
            }
        }
    }

    return 0;
}