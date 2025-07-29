#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

//vector<complex<double>> dft(vector<complex<double>> arr)
//{
//    int n = arr.size();
//
//    vector<complex<double>> outputArr(n);
//
//    for (int k = 0; k < n; k++)
//    {
//        outputArr[k] = 0;
//        for (int t = 0; t < n; t++)
//        {
//            double angle = -2 * PI * t * k / n;
//            outputArr[k] += arr[t] * complex<double>(cos(angle), sin(angle));
//             
//        
//        }
//
//    }
//
//    return outputArr;
//
//

//}

void bitReverse(vector<complex<double>>& a)
{
    int n = a.size();
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        int bit = n >> 1;
        while (j & bit)
        {
            j ^= bit;
            bit >>= 1;
        }

        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);


    }
}

void fft(vector<complex<double>>& a, bool invert)
{
    int n = a.size();

    bitReverse(a);

    for (int len = 2; len <= n; len <<= 1)
    {
        double angle = 2 * PI / len * (invert ? -1 : 1);
        complex<double> wlen(cos(angle), sin(angle));

        for (int i = 0; i < n; i += len)
        {
            complex<double> w = 1;

            for (int j = 0; j < len / 2; ++j)
            {
                complex<double> u = a[i + j];
                complex<double> v = a[i + j + len / 2] * w;
                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;

                w *= wlen;
            }
        }
    }

    if (invert)
    {
        for (complex<double>& x : a)
            x /= n;
    }
}


int PowerOfTwo(int n)
{
    int power = 1;

    while (power < n)
    {
        power <<= 1;

    }
    return power; 

}

vector<long long> convolution(const vector<int>& a, const vector<int>& b)
{
    int n = PowerOfTwo(a.size() + b.size() - 1);
    vector<complex<double>> fa(a.begin(), a.end()), fb(b.begin(), b.end());

    fa.resize(n); fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
    {
        fa[i] *= fb[i];
    }
    fft(fa, true);

    vector<long long> res(n);
    for (int i = 0; i < n; i++)
    {
        res[i] = llround(fa[i].real());
        
    }
    return res;


}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++)
        cin >> X[i];
    for (int i = 0; i < N; i++)
        cin >> Y[i];

    vector<int> Y_rev(Y.rbegin(), Y.rend());
    vector<int> X2 = X;
    X2.insert(X2.end(), X.begin(), X.end());

    auto conv = convolution(X2, Y_rev);

    long long ans = LLONG_MIN;
    for (int i = N - 1; i < N - 1 + N; i++) {
        ans = max(ans, conv[i]);
    }

    cout << ans << "\n";
    return 0;

}
