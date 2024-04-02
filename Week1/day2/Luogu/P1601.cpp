#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

vector<int> add(vector<int>& A, vector<int>& B) {
    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        int x = i < A.size() ? A[i] : 0;
        int y = i < B.size() ? B[i] : 0;
        int sum = x + y + t;
        C.pb(sum % 10);
        t = sum / 10;
    }
    if (t) C.pb(t);
    return C;
}

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
    auto C = add(A, B);
    for (int i = C.size() - 1; i >= 0; i--) {
        cout << C[i];
    }
    cout << endl;

    return 0;
}