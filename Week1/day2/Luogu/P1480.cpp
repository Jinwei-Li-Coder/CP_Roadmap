#include <bits/stdc++.h>

// #define int int64_t
#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

vector<int> divide(vector<int> & A, int b) {
    vector<int> C;
    LL rem = 0;
    for (int i = A.size() - 1; i >= 0; i--) {
        
        LL x = rem * 10 + A[i];
        C.pb(x / b);
        rem = x % b;
        // cout << x << " " << rem << endl;
    }
    reverse(C.begin(), C.end());
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i--) A.pb(a[i] - '0');
    auto C = divide(A, b);
    for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    cout << endl;
    return 0;
}