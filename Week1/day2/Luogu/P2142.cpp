#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define pb push_back
using namespace std;
typedef long long LL;

int cmp(string& a, string &b) {
    if (a.size() != b.size()) {
        if (a.size() > b.size()) return 1;
        else return -1;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) return 1;
        else if (a[i] < b[i]) return -1;
    }
    return 0;
}

vector<int> sub(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size(); i++) {
        int x = A[i];
        int y = i < B.size() ? B[i] : 0;
        int ret = x - t -y;
        t = 0;
        if (ret < 0) {
            t = 1;
            ret += 10;
        }
        C.pb(ret % 10);
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;

}

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i--) A.pb(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--) B.pb(b[i] - '0');
    vector<int> C;
    int cmp_result = cmp(a, b);
    if (cmp_result == 0) {
        cout << 0 << endl;
    } else if(cmp_result > 0) {
        auto C = sub(A, B);
        for(int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }
        cout << endl;
    } else {
        cout << "-";
        auto C = sub(B, A);
        for(int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }        
    }

    return 0;
}