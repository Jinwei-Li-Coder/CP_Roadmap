#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int d, sum_time;
    cin >> d >> sum_time;
    vector<pair<int, int> > a(d);
    int sum_min = 0, sum_max = 0;
    
    for (int i = 0; i < d; i++) {
        cin >> a[i].first >> a[i].second;
        sum_min += a[i].first;
        sum_max += a[i].second;
    }

    if (sum_time < sum_min || sum_time > sum_max) {
        cout << "NO" << endl;
    } else {
        vector<int> ans(d);
        for (int i = 0; i < d; i++) {
            ans[i] = a[i].first;
            sum_time -= a[i].first;
        }
        int i = 0;
        while(sum_time) {
            int max_diff = min(sum_time, a[i].second - a[i].first);
            sum_time -= max_diff;
            ans[i] += max_diff;
            i++;
        }
        cout << "YES" << endl;
        for (auto time : ans) {
            cout << time << " ";
        }
        cout << endl;

    }


    return 0;
}