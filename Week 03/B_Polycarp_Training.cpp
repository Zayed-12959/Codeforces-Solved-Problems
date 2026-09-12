#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int day = 1;
    for(int i=0; i<n; i++){
        if(a[i]>=day){
            day++;
        }
    }

    cout << day-1 << endl;
    return 0;
}
