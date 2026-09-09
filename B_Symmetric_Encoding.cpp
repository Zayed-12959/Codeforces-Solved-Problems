#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string b;
        cin >> b;

        set<char> unique_chars(b.begin(), b.end());

        string r = "";

        for(char c : unique_chars){
            r += c;
        }

        string r_rev = r;
        reverse(r_rev.begin(), r_rev.end());

        unordered_map<char, int> sym_map;
        for(int i=0 ; i<r.size(); i++){
            sym_map[r[i]] = r_rev[i];
        }

        string s = b;
        for(int i=0; i<n; i++){
            s[i] = sym_map[b[i]];
        }
        cout << s << endl;
    }
    return 0;
}