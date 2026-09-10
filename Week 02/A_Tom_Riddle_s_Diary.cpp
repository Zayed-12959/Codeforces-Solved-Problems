#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> seen;

    while(n--){
        string s;
        cin >> s;

        bool found = false;
        for(int i=0; i<seen.size(); i++){
            if(seen[i] == s){
                found = true;
                break;
            }
        }
        if(!found){
            cout << "NO" << endl;
            seen.push_back(s);
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}