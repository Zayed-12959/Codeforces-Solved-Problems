#include <bits/stdc++.h>
using namespace std;

long long lcm (long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main(){
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long cnt1 = (n/a)*p;
    long long cnt2 = (n/b)*q;
    long long overlap = (n/lcm(a, b))*min(p, q);
    long long ans = cnt1 + cnt2 - overlap;

    cout << ans << endl;    
    return 0;
}