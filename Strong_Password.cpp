#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        bool inserted = false;
        string ans = "";

        for(int i = 0; i < s.length(); i++){
            ans += s[i];
            
            if(!inserted && i + 1 < s.length() && s[i] == s[i+1]){
                char insert_char = (s[i] == 'a') ? 'b' : 'a';
                ans += insert_char;
                inserted = true;
            }
        }

        if(!inserted){
            char insert_char = (s.back() == 'a') ? 'b' : 'a';
            ans += insert_char;
        }

        cout << ans << "\n";
    }
    return 0;
}
