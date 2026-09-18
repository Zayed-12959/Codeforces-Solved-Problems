#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int m;
        cin >> m;

        while(m--){
            string s;
            cin >> s;

            if(s.length()!=n){
                cout << "NO" << endl;
                continue;
            }

            unordered_map<char, int> char_to_int;
            unordered_map<int, char> int_to_char;
            bool ok = true;

            for(int i=0; i<n; i++){
                char c = s[i];
                int num = a[i];

                if(char_to_int.count(c) && char_to_int[c]!=num){
                    ok = false;
                    break;
                }

                if(int_to_char.count(num) && int_to_char[num]!=c){
                    ok = false;
                    break;
                }

                char_to_int[c] = num;
                int_to_char[num] = c;
            }

            if(ok){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}