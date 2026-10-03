#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> digits(n);
        vector<long long> pref(n+1, 0);

        for(int i=0; i<n; i++){
            cin >> digits[i];
            pref[i+1] = pref[i] + digits[i];
        }

        string s;
        cin >> s;

        long long max_sum = 0;

        int left = 0; 
        int right = n-1;

        while(left<right){
            while(left<right && s[left]!='L'){
                left++;
            }

            while(left<right && s[right]!='R'){
                right--;
            }

            if(left<right){
                max_sum += (pref[right+1] - pref[left]);
                left++;
                right--;
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}