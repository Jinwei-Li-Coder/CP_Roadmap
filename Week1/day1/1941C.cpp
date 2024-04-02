#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <deque>
#include <stack>
#include <queue>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

int main() {
    cin.tie();
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max_idx = n - 1;
        int ans = 0;
        for (int i = 1; i < max_idx; i++) {
            if (s[i] == 'a') {
                if (s[i - 1] == 'm' && s[i + 1] == 'p') {
                    if (i + 2 < n && s[i + 2] == 'p') s[i] = 'x';
                    else  s[i + 1] = 'x';
                    ans ++;
                }
            } else if (s[i] == 'i') {
                if (s[i - 1] == 'p' && s[i + 1] == 'e') {
                    ans ++;
                }
            }
        }
        
        
        cout << ans << endl;

    }

    return 0;
}