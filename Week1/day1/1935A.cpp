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
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        if (s <= rev_s) {
            if (n % 2 == 0) {
                cout << s << endl;
            } else {
                cout << s + rev_s << endl;
            }
        } else {
            if (n % 2 == 0) {
                cout << rev_s + s << endl;
            } else {
                cout << rev_s << endl;
            }
        }

    }

    return 0;
}