#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> count_first(11,0);
        vector<long long> count_second(11, 0);
        vector<vector<long long>> count_both(11, vector<long long>(11, 0));

        long long ans = 0;

        for(int i=0; i<n; i++){
            string s;
            cin >> s;

            int c1 = s[0] - 'a';
            int c2 = s[1] - 'a';

            long long valid = (count_first[c1]-count_both[c1][c2]) + (count_second[c2]-count_both[c1][c2]);

            ans += valid;

            count_first[c1]++;
            count_second[c2]++;
            count_both[c1][c2]++;
        }

        cout << ans << endl;
    }
}