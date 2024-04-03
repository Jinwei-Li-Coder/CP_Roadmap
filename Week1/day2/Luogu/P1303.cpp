#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;

vector<int> mul(vector<int>& A, vector<int>& B) {
    vector<int> ret;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            int mul = A[i] * B[j];
            int idx = i + j;
            if (ret.size() <= idx) ret.push_back(mul);
            else ret[idx] += mul;

        }
    }
    int t = 0;
    for (int i = 0; i < ret.size(); i++) {
        int cur = t + ret[i];
        ret[i] = cur % 10;
        t = cur / 10;
    }
    while(t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    while(ret.size() > 1 && ret.back() == 0) ret.pop_back();
    return ret;
}

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i --) {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i --) {
        B.push_back(b[i] - '0');
    }

    auto ret = mul(A, B);
    for (int i = ret.size() - 1; i >= 0; i--) cout << ret[i];
    return 0;
}