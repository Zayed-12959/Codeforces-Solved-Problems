#include <bits/stdc++.h>

using namespace std;

int main(){
        int n;
        cin >> n;

        vector<long long> h;
        long long total_sum = 0;
        long long min_odd = INT_MAX;
        int odd_count = 0;

        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            h.push_back(x);

            total_sum += x;

            if(x%2 != 0){
                odd_count++;
                min_odd = min(min_odd, x);
            }
        }

        if(odd_count%2 != 0){
            total_sum -= min_odd;
        }

        cout << total_sum << endl;

    return 0;
}