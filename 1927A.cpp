#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<char> a;

        int min_black = INT_MAX;
        int max_black = INT_MIN;

        for(int i=0; i<n; i++){
            char x;
            cin >> x;
            a.push_back(x);
        }

        for(int i=0; i<n; i++){
            if(a[i]=='B'){
                min_black = min(min_black, i);
                max_black = max(max_black, i);
            }
        }

        int count = max_black - min_black + 1;

        cout << count << endl;
        
    }

    return 0;
}