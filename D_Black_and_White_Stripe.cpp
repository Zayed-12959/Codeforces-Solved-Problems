#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int current_w = 0;
        for(int i=0; i<k; i++){
            if(s[i]=='W'){
                current_w++;
            }
        }

        int min_w = current_w;
        for(int i=k; i<n; i++){
            if(s[i]=='W'){
                current_w++;
            }
            if(s[i-k]=='W'){
                current_w--;
            }
            min_w = min(min_w, current_w);
        }

        cout << min_w << endl;

    }
    return 0;
}