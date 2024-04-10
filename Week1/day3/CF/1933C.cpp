#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt;
    cin >> ttt;
    while(ttt--) {
        LL a, b, l;
        cin >> a >> b >> l;
        unordered_set<int> st;
        for (int i = 0; ; i++) {
            LL aa = pow(a, i);
            if (l % aa != 0 || aa > l) break;
            LL rem = l / aa;
            for (int j = 0; ; j++) {
                LL bb = pow(b, j);
                if (rem % bb != 0 || bb > rem) break;
                st.insert(rem / bb);
            }
        }
        cout << st.size() << endl;
    }

    return 0;
}