#include <bits/stdc++.h>
using namespace std;

// ------------------------加法 start
vector<int> add(vector<int>& A, vector<int>& B) {
    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        int x = i < A.size() ? A[i] : 0;
        int y = i < B.size() ? B[i] : 0;
        int sum = x + y + t;
        C.push_back(sum % 10);
        t = sum / 10;
    }
    if (t) C.push_back(t);
    return C;
}
// ------------------------加法 end


// ------------------------减法 start
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
        C.push_back(ret % 10);
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;

}
// ------------------------减法 end


// ------------------------乘法 start
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

// ------------------------乘法 end


// ------------------------除法 start
vector<int> divide(vector<int> & A, int b) {
    vector<int> C;
    int rem = 0;
    for (int i = A.size() - 1; i >= 0; i--) {
        
        int x = rem * 10 + A[i];
        C.push_back(x / b);
        rem = x % b;
    }
    reverse(C.begin(), C.end());
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

// ------------------------乘法 end

/