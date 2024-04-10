#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define endl "\n";
using namespace std;
typedef long long LL;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ttt = 1;
    while(ttt--) {
        stack<int> stk;
        string s;
        cin >> s;
        s.pop_back();
        for (int i = 0, x = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                stk.push(x);
                x = 0;
            } else if (isdigit(s[i])) {
                x = x * 10 + (s[i] - '0');
            } else {

                int y = stk.top();
                stk.pop();
                int x = stk.top();
                stk.pop();
                int z = 0;
                if (s[i] == '-') z = x - y;
                else if(s[i] == '+') z = x + y;
                else if (s[i] == '*') z = x * y;
                else if (s[i] == '/') z = x / y;
                stk.push(z);
            }
        }
        cout << stk.top() << endl;
        
    }

    return 0;
}