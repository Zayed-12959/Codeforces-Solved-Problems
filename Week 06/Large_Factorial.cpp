#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, ans = 1;
        cin >> n;

        for(int i=1; i<=n; i++){
            ans = (1LL * ans%MOD * i%MOD) % MOD;
        }

        cout << ans << endl;
    }
    return 0;
}