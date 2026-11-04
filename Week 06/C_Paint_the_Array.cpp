#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long G1=0, G2=0;

        for(int i=0; i<n; i+=2){
            G1 = __gcd(G1, a[i]);
        }

        for(int i=1; i<n; i+=2){
            G2 = __gcd(G2, a[i]);
        }

        long long ans = 0;

        bool ok1 = true;
        for(int i=1; i<n; i+=2){
            if(a[i] % G1 == 0){
                ok1 = false;
                break;
            }
        }

        if(ok1){
            ans = G1;
        }
        else{
            bool ok2 = true;
            for(int i=0; i<n; i+=2){
                if(a[i] % G2 == 0){
                    ok2 = false;
                    break;
                }
            }

            if(ok2){
                ans = G2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}