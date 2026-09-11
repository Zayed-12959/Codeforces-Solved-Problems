#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(n+1);

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    unordered_set<int> seen;
    vector<int> counts(n+1);

    for(int i=n; i>=1; i--){
        seen.insert(arr[i]);
        counts[i] = seen.size();
    }

    while(m--){
        int x;
        cin >> x;
        cout << counts[x] << endl;
    }

    return 0;
}