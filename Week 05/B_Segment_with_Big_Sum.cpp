#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long s;

    cin >> n >> s;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l=0;
    long long current_sum = 0;
    int min_len = n+1;

    for(int r=0; r<n; r++){
        current_sum += a[r];

        while(current_sum >= s){
            min_len = min(min_len, r - l + 1);
            current_sum -= a[l];
            l++;
        }
    }

    if (min_len == n + 1) {
        cout << -1 << "\n";
    } else {
        cout << min_len << "\n";
    }

    return 0;
}