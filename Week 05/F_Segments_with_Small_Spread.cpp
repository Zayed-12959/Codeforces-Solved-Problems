#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;

    cin >> n >> k;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    deque<int> max_dq, min_dq;
    int l=0;
    long long count = 0;

    for(int r=0; r<n; r++){
        while(!max_dq.empty() && a[max_dq.back()]<=a[r]){
            max_dq.pop_back();
        }
        max_dq.push_back(r);

        while (!min_dq.empty() && a[min_dq.back()] >= a[r]) {
            min_dq.pop_back();
        }
        min_dq.push_back(r);

        while (a[max_dq.front()] - a[min_dq.front()] > k) {
            if (max_dq.front() == l) max_dq.pop_front();
            if (min_dq.front() == l) min_dq.pop_front();
            l++;
        }

        count += r - l + 1;
    }

    cout << count << endl;

    return 0;
}