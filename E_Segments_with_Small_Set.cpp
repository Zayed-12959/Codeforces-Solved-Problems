#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;

    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> freq(100001, 0);
    int unique_count = 0;
    int l = 0;
    long long total_good = 0;

    for (int r = 0; r < n; ++r) {
        if (freq[a[r]] == 0) {
            unique_count++;
        }
        freq[a[r]]++;

        while (unique_count > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                unique_count--;
            }
            l++;
        }

        total_good += (r - l + 1);
    }

    cout << total_good << "\n";

    return 0;
}