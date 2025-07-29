#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

using cd = complex<double>;

void fft(vector<cd>& a, bool invert) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1) j ^= bit;
        j ^= bit;
        if (i < j) swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1) {
        double angle = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(angle), sin(angle));
        for (int i = 0; i < n; i += len) {
            cd w = 1;
            for (int j = 0; j < len / 2; ++j) {
                cd u = a[i + j];
                cd v = a[i + j + len / 2] * w;
                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert) {
        for (cd& x : a) x /= n;
    }
}

int nextPowerOfTwo(int n) {
    int power = 1;
    while (power < n) power <<= 1;
    return power;
}

vector<int> convolution(const vector<int>& a, const vector<int>& b) {
    int n = nextPowerOfTwo(a.size() + b.size());
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    fa.resize(n); fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<int> res(n);
    for (int i = 0; i < n; i++)
        res[i] = int(round(fa[i].real()));
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string intA, intB;
    cin >> intA >> intB;

    vector<int> A, B;
    for (int i = intA.size() - 1; i >= 0; i--)
        A.push_back(intA[i] - '0');

    for (int i = intB.size() - 1; i >= 0; i--)
        B.push_back(intB[i] - '0');

    vector<int> result = convolution(A, B);


    for (int i = 0; i + 1 < result.size(); ++i) {
        result[i + 1] += result[i] / 10;
        result[i] %= 10;
    }

    while (result.size() > 1 && result.back() == 0)
        result.pop_back();

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];
    cout << '\n';
}
