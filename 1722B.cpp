#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    cout << endl;

    while(t--){
        bool same = true;
        int n;
        cin >> n;

        vector<char> a;
        vector<char> b;

        for(int i=0; i<n; i++){
            char x;
            cin >> x;
            a.push_back(x);
        }

        for(int i=0; i<n; i++){
            char x;
            cin >> x;
            b.push_back(x);
        }
        cout << endl;

        for(int i=0; i<n; i++){
            if((a[i]=='G' && b[i]=='B') || (a[i]=='B' && b[i]=='G')){
                continue;
            }
            if(a[i]!=b[i]){
                same = false;
            }
        }

        if(same){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        cout << endl;

    }

    return 0;
}