#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<char, int> freq;

        for(char c:s){
            freq[c]++;
        }

        int odd_count=0;
        for(auto pair:freq){
            if(pair.second % 2 != 0){
                odd_count++;
            }
        }

        if(odd_count <= k+1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl; 
        }
    }
    return 0;
}