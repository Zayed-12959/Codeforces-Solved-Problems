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
    long long current_sum=0;
    int count = 0;

    for(int r=0; r<n; r++){
        current_sum += a[r];

        while(current_sum>s){
            current_sum -= a[l];
            l++;
        }
        
        count += r - l + 1;
    }

    cout << count << endl;

    return 0;
}