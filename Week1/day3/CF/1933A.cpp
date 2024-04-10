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
        int sum = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            sum += abs(t);
        }
        cout << sum << endl;
        
    }

    return 0;
}