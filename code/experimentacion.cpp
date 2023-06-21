#include "experimentacion.hpp"
#include <cmath>

std::vector<long long> ObtenerPrimos(const long long x) {
    std::vector<bool> M(x + 1, true);
    M[0] = M[1] = false;
    std::vector<long long> P;
    for (long long n = 2LL; n <= x; n++) {
        if (M[n]) {
            P.push_back(n);
        }
        for (long long p : P) {
            if (n * p > x) {
                break;
            }
            M[n * p] = false;
            if (n % p == 0) {
                break;
            }
        }
    }
    return P;
}

long long ObtenerMaximoPrimo(const long long p, const long long x, const std::vector<long long>& P) {
    int l = 0;
    int r = (int)P.size() - 1;
    if (p * P[r - 1] <= x) {
        return P[r - 1];
    }
    if (p * p > x) {
        return -1;
    }
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (p * P[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }
    return P[l];
}

std::tuple<long double, std::vector<long double>> Sumar1(const long long x, const std::vector<long long>& P) {
    std::vector<long double> L(x + 1);
    L[0] = 0.0L;
    long double s = 0.0L;
    int i = 0;
    for (int n = 1; i <= x; i++) {
        if (i == (int)P.size()) {
            break;
        }
        L[n] = L[n - 1];
        if (P[i] == n) {
            const long double log = std::logl(n);
            L[n] += log;
            s += log * log;
            i++;
        }
    }
    return std::make_tuple(s, L);
}

long double Sumar2(const long long x, const std::vector<long double>& L, const std::vector<long long>& P) {
    long double s = 0.0L;
    for (long long p: P) {
        long long q = ObtenerMaximoPrimo(p, x, P);
        if (q == -1) {
            break;
        }
        s += std::logl(p) * (L[q] - L[p - 1]);
    }
    return s;
}

long double K(long long x) {
    std::vector<long long> P = ObtenerPrimos(x);
    long double s;
    std::vector<long double> L;
    std::tie(s, L) = Sumar1(x, P);
    long double t = Sumar2(x, L, P);
    return std::abs(s + t - 2.0L * x * std::logl(x)) / x;
}
